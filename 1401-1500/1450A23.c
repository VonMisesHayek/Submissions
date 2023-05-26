#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define ABC 26
int rearrange(char *str, int length) {
    int sieve[ABC]; rep (i,0,ABC) sieve[i]=0;
    rep (i,0,length) sieve[str[i]-'a']++;
    int pos=0;
    rep (i,0,ABC) {
        rep (j,0,sieve[i]) {
            str[pos]='a'+i;
            pos++;
        }
    }
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        char str[len+1]; scanf("%s\n",str);
        rearrange(str,len);
        printf("%s\n",str);
    }
    return 0;
}

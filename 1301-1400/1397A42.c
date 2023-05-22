#include <stdio.h>
#include <string.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define ABC 26
int equalize(int length) {
    char curr[1001];
    int sieve[ABC],len; rep (i,0,ABC) sieve[i]=0;
    rep (i,0,length) {
        scanf("%s",curr); len=strlen(curr);
        rep (j,0,len) sieve[curr[j]-'a']++;
    }
    rep (i,0,ABC) {
        if (sieve[i]%length!=0) return 0;
    }
    return 1;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        (equalize(len)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

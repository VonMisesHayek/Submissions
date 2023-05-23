#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int gob(char *s, int length) {
    int pos=length-1,par=0;
    while (s[pos]==')' && pos>=0) {
        par++;
        pos--;
    }
    return (2*par>length);
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        char str[len+1]; scanf("%s\n",str);
        (gob(str,len)) ? printf("Yes\n"):printf("No\n");
    }
    return 0;
}

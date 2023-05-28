#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(char *str, int length) {
    rep (i,0,length) scanf("%c",(str+i));
    scanf("\n");
}
int colorblind(char *stro, char *strt, int length) {
    rep (i,0,length) {
        if (stro[i]!=strt[i] && (stro[i]=='R' || strt[i]=='R')) return 0;
    }
    return 1;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        char row1[len],row2[len]; read(row1,len); read(row2,len);
        (colorblind(row1,row2,len)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

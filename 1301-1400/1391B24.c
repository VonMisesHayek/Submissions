#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        scanf("\n");
        step+=width;
    }
}
int functional(char *biarr, int length, int width) {
    int step=0,count=0;
    rep (i,0,length) {
        if (*((biarr+step)+width-1)=='R') count++;
        step+=width;
    } step-=width;
    rep (j,0,width) {
        if (*((biarr+step)+j)=='D') count++;
    }
    return count;
}
int main() {
    int queries,n,m; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&n,&m);
        char conv[n][m]; scan(conv,n,m);
        printf("%d\n",functional(conv,n,m));
    }
    return 0;
}

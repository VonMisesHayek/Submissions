#include <stdio.h>
#include <limits.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int min(int x, int y) {
    return (x<y) ? x:y;
}
int max(int x, int y) {
    return (x>y) ? x:y;
}
void read(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%d",((biarr+step)+j));
        step+=width;
    }
}
int min_row(int *biarr, int index, int width) {
    int m=INT_MAX,step=width*index;
    rep (j,0,width) m=min(m,*((biarr+step)+j));
    return m;
}
int jack(int *biarr, int length, int width) {
    int m=0;
    rep (i,0,length) m=max(m,min_row(biarr,i,width));
    return m;
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    int cost[n][m]; read(cost,n,m);
    printf("%d",jack(cost,n,m));
    return 0;
}

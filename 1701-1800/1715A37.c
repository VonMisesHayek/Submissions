#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MIN(a,b) ((a)<(b)) ? (a):(b)
#define MAX(a,b) ((a)>(b)) ? (a):(b)
int cross(int n, int m) {
    int min=MIN(n,m),max=MAX(m,n);
    if (max==1) return 0;
    return max+2*min-2;
}
int main() {
    int queries,n,m; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&n,&m);
        printf("%d\n",cross(n,m));
    }
    return 0;
}

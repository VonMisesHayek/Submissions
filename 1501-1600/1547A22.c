#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int between(int x, int y, int z) {
    return (x<z && z<y) || (y<z && z<x);
}
int line(int x, int y, int z) {
    return (x==y && y==z);
}
int path(int xa, int ya, int xb, int yb, int xf, int yf) {
    int p=between(xa,xb,xf) && line(ya,yb,yf);
    int q=between(ya,yb,yf) && line(xa,xb,xf);
    int plus=p || q;
    return abs(xa-xb)+abs(ya-yb)+2*plus;
}
int main() {
    int queries; scanf("%d\n\n",&queries);
    rep (i,0,queries) {
        int xa,ya,xb,yb,xf,yf; scanf("%d %d\n%d %d\n%d %d\n\n",&xa,&ya,&xb,&yb,&xf,&yf);
        printf("%d\n",path(xa,ya,xb,yb,xf,yf));
    }
    return 0;
}

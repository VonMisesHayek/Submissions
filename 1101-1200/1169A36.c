#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int meet(int n, int a, int b, int x, int y) {
    int dan=a,vlad=b,in_dan=1,in_vlad=1;
    while (in_dan && in_vlad) {
        if (dan==vlad) return 1;
        if (dan==x) in_dan=0;
        if (vlad==y) in_vlad=0;
        (dan<n) ? dan++:(dan=1);
        (vlad>1) ? vlad--:(vlad=n);
    }
    return 0;
}
int main() {
    int n,a,b,x,y;
    scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);
    (meet(n,a,b,x,y)) ? printf("YES"):printf("NO");
    return 0;
}

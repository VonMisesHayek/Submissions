#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int feed(int a, int b, int c, int x, int y) {
    return ((a+c)>=x && (b+c)>=y && (a+b+c)>=(x+y));
}
int main() {
    int queries,a,b,c,x,y; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d %d %d\n",&a,&b,&c,&x,&y);
        (feed(a,b,c,x,y)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

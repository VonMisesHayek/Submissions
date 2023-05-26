#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int fair(int a, int b, int c, int d) {
    int p=(a>c && a>d) && (b>c && b>d);
    int q=(c>a && c>b) && (d>a && d>b);
    return !(p || q);
}
int main() {
    int queries,a,b,c,d; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d %d\n",&a,&b,&c,&d);
        (fair(a,b,c,d)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

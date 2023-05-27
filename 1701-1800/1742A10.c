#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int is_sum(int x, int y, int z) {
    return (x==(y+z) || y==(x+z) || z==(y+x));
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int a,b,c; scanf("%d %d %d\n",&a,&b,&c);
        (is_sum(a,b,c)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

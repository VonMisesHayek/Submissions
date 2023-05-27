#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int sumdig(int n) {
    int res=0;
    rep (i,0,3) {
        res+=n%10;
        n/=10;
    }
    return res;
}
int is_equal(int n) {
    return (sumdig(n/1000)==sumdig(n));
}
int main() {
    int queries,n; scanf("%d\n",&queries);
    rep(i,0,queries) {
        scanf("%d\n",&n);
        (is_equal(n)) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}

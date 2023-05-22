#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
int main() {
    int queries;
    ll n;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%I64d\n",&n);
        (n%4==0) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

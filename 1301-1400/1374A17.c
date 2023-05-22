#include <stdio.h>
typedef long long ll;
ll rr(ll x, ll y, ll n) {
    return ((n-y)/x)*x+y;
}
int main() {
    long queries; scanf("%ld\n",&queries);
    ll x,y,n;
    for (long i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&x,&y,&n);
        printf("%I64d\n",rr(x,y,n));
    }
    return 0;
}

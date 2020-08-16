#include <stdio.h>
typedef long long ll;
ll solve(ll l, ll r, ll d) {
    if (d<l) {
        return d;
    } else {
        return r+d-r%d;
    }
}
int main() {
    int queries;
    ll l,r,d;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&l,&r,&d);
        printf("%I64d\n",solve(l,r,d));
    }
    return 0;
}

#include <stdio.h>
typedef long long ll;
int moves(ll x, ll y) {
    if (x==y) {
        return 0;
    } else if (x>y) {
        if (x%2==y%2) {
            return 1;
        } else {
            return 2;
        }
    } else {
        if (x%2!=y%2) {
            return 1;
        } else {
            return 2;
        }
    }
}
int main() {
    int queries;
    ll a,b;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d\n",&a,&b);
        printf("%d\n",moves(a,b));
    }
    return 0;
}

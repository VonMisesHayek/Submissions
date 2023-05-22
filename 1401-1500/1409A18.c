#include <stdio.h>
typedef long long ll;
ll moves(ll a, ll b) {
    ll x=llabs(a-b);
    return x/10+(x%10!=0);
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll a,b;
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d\n",&a,&b);
        printf("%I64d\n",moves(a,b));
    }
    return 0;
}

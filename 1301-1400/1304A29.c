#include <stdio.h>
typedef long long ll;
ll same(ll x, ll y, ll a, ll b) {
    if ((y-x)%(a+b)==0) {
        return (y-x)/(a+b);
    } else {
        return -1;
    }
}
int main() {
    int queries;
    ll x,y,a,b;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d %I64d\n",&x,&y,&a,&b);
        printf("%I64d\n",same(x,y,a,b));
    }
    return 0;
}

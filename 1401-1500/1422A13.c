#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
ll complete(ll a, ll b, ll c) {
    return a+b+c-1;
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll a,b,c;
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&a,&b,&c);
        printf("%I64d\n",complete(a,b,c));
    }
    return 0;
}

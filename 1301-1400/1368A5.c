#include <stdio.h>
typedef long long ll;
long op(ll a, ll b, ll c) {
    long res=0;
    while (a<=c && b<=c) {
        if (a<=b) {
            a+=b;
        } else {
            b+=a;
        }
        res++;
    }
    return res;
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll a,b,c;
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&a,&b,&c);
        printf("%ld\n",op(a,b,c));
    }
    return 0;
}

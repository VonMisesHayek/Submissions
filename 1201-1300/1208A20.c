#include <stdio.h>
typedef long long ll;
ll xorinacci(ll a, ll b, ll n) {
    int mod3=n%3;
    switch (mod3) {
        case 0: return a;
        case 1: return b;
        case 2: return b^a;
    }
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll a,b,n;
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&a,&b,&n);
        printf("%I64d\n",xorinacci(a,b,n));
    }
    return 0;
}

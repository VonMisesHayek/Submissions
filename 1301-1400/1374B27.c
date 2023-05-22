#include <stdio.h>
typedef long long ll;
int moves(ll n) {
    int pow2=0,pow3=0;
    while (n%3==0) {
        n/=3;
        pow3++;
    }
    while (n%2==0) {
        n/=2;
        pow2++;
    }
    if (n!=1 || pow2>pow3) {
        return -1;
    } else {
        return 2*pow3-pow2;
    }
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll curr;
    for (int i=0; i<queries; i++) {
        scanf("%I64d\d",&curr);
        printf("%d\n",moves(curr));
    }
    return 0;
}

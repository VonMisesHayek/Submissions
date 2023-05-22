#include <stdio.h>
typedef long long ll;
ll min_div(ll n) {
    ll root=sqrt(n);
    if (n%3==0) return 3;
    for (long i=5; i<=root; i+=6) {
        if (n%i==0) {
            return i;
        } else if (n%(i+2)==0) {
            return i+2;
        }
    }
    return n;
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll n,k;
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d\n",&n,&k);
        if (n%2==0) {
            printf("%I64d\n",n+2*k);
        } else {
            printf("%I64d\n",n+min_div(n)+2*(k-1));
        }
    }
    return 0;
}

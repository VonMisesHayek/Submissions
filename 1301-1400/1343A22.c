#include <stdio.h>
typedef long long ll;
ll find(ll n) {
    ll ex=4;
    while (n%(ex-1)!=0) ex*=2;
    return n/(ex-1);
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll n;
    for (int i=0; i<queries; i++) {
        scanf("%I64d\n",&n);
        printf("%I64d\n",find(n));
    }
    return 0;
}

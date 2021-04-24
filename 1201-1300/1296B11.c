#include <stdio.h>
typedef long long ll;
ll food(ll n) {
    ll q;
    if (n<10) {
        return n;
    } else {
        q=n/10;
        return 10*q+food(q+n%10);
    }
}
int main() {
    int queries;
    ll curr;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d\n",&curr);
        printf("%I64d\n",food(curr));
    }
    return 0;
}

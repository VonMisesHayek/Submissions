#include <stdio.h>
typedef long long ll;
void distribute(ll n) {
    printf("%I64d\n",(n-1)/2);
}
int main() {
    int queries;
    ll n;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d\n",&n);
        distribute(n);
    }
    return 0;
}

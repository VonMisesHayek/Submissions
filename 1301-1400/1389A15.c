#include <stdio.h>
typedef long long ll;
void find(ll l, ll r) {
    if (r<2*l) {
        printf("-1 -1\n");
    } else {
        printf("%I64d %I64d\n",l,2*l);
    }
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll l,r;
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d\n",&l,&r);
        find(l,r);
    }
    return 0;
}

#include <stdio.h>
typedef long long ll;
void can(ll x, ll y, ll z) {
    if (x==y && z<=x) {
        printf("YES\n%I64d %I64d %I64d\n",x,z,z);
    } else if (x==z && y<=x) {
        printf("YES\n%I64d %I64d %I64d\n",y,x,y);
    } else if (y==z && x<=y) {
        printf("YES\n%I64d %I64d %I64d\n",x,x,y);
    } else {
        printf("NO\n");
    }
}
int main() {
    long queries; scanf("%ld\n",&queries);
    ll x,y,z;
    for (long i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&x,&y,&z);
        can(x,y,z);
    }
    return 0;
}

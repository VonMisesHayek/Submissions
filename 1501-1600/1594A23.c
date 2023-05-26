#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
void csum(ll n) {
    ll power=1,k=n;
    while (k%2==0) {
        power*=2;
        k/=2;
    }
    ll l=(k+1)/2-power,r=l+power*2-1;
    printf("%I64d %I64d\n",l,r);
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll n;
    rep (i,0,queries) {
        scanf("%I64d\n",&n);
        csum(n);
    }
    return 0;
}

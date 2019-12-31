#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
ll distance(ll a, ll b, ll c) {
    return llabs(a-b)+llabs(b-c)+llabs(c-a);
}
ll minimum(ll a, ll b, ll c) {
    ll res=3000000000,cand;
    rep (i,-1,2) {
        rep (j,-1,2) {
            rep (k,-1,2) {
                cand=distance(a+i,b+j,c+k);
                if (res>cand) res=cand;
            }
        }
    }
    return res;
}
int main() {
    int queries;
    ll a,b,c;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&a,&b,&c);
        printf("%ld\n",minimum(a,b,c));
    }
    return 0;
}

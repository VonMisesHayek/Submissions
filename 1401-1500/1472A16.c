#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
ll powtwo(ll n) {
    int res=0;
    ll a=n;
    while (a%2==0) {
        res++;
        a/=2;
    }
    return res;
}
int cards(ll w, ll h, ll n) {
    if (n==1) return 1;
    ll tot=pow(2,powtwo(w))*pow(2,powtwo(h));
    return (n<=tot);
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll w,h,n;
    rep (i,0,queries) {
        scanf("%I64d %I64d %I64d\n",&w,&h,&n);
        (cards(w,h,n)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

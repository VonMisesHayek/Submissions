#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
ll min(ll x, ll y) {
    return (x<y) ? x:y;
}
ll moves(ll a, ll b, ll c, ll d) {
    ll x=llabs(c-a),y=llabs(d-b);
    return min(x,y)+llabs(y-x);
}
int main() {
    ll a,b,c,d;
    scanf("%I64d %I64d\n%I64d %I64d",&a,&b,&c,&d);
    printf("%I64d",moves(a,b,c,d));
    return 0;
}

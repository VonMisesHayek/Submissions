#include <stdio.h>
typedef long long ll;
ll choc(ll s, ll a, ll b, ll c) {
    ll q;
    if (s<(a*c)) {
        return s/c;
    } else {
        q=s/(a*c);
        return q*(a+b)+choc(s%(a*c),a,b,c);
    }
}
int main() {
    int queries;
    ll s,a,b,c;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d %I64d\n",&s,&a,&b,&c);
        printf("%I64d\n",choc(s,a,b,c));
    }
    return 0;
}

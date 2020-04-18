#include <stdio.h>
typedef long long ll;
ll max(ll a, ll b, ll c) {
    if (a>=b && a>=c) {
        return a;
    } else if (b>=a && b>=c) {
        return b;
    } else {
        return c;
    }
}
int distribute(ll a, ll b, ll c, ll p) {
    ll full=3*max(a,b,c)-a-b-c;
    if (full>p) {
        return 0;
    } else {
        return ((p-full)%3==0);
    }
}
int main() {
    int queries;
    ll a,b,c,p;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d %I64d\n",&a,&b,&c,&p);
        if (distribute(a,b,c,p)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

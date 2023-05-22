#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
int main() {
    int queries; scanf("%d\n",&queries);
    long len;
    ll a,b,c,curr;
    rep (i,0,queries) {
        scanf("%ld\n%I64d %I64d",&len,&a,&b);
        for (long j=2; j<len-1; j++) scanf("%I64d",&curr);
        scanf("%I64d\n",&c);
        (a+b>c) ? printf("-1\n"):printf("1 2 %ld\n",len);
    }
    return 0;
}

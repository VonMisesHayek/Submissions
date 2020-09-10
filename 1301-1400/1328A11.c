#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
int main() {
    int queries;
    ll a,b;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%I64d %I64d\n",&a,&b);
        (a%b==0) ? printf("0\n"):printf("%I64d\n",b-a%b);
    }
    return 0;
}

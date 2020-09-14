#include <stdio.h>
typedef long long ll;
int main() {
    int queries;
    ll a,b,c,d;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d %I64d\n",&a,&b,&c,&d);
        printf("%I64d %I64d %I64d\n",b,c,c);
    }
    return 0;
}

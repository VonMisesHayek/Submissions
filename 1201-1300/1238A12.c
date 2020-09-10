#include <stdio.h>
typedef long long ll;
int main() {
    int queries;
    ll x,y;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d\n",&x,&y);
        if (y+1==x) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}

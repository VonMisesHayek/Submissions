#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int main() {
    int queries,len,curr,even,odd; scanf("%d\n",&queries);
    rep (i,0,queries) {
        even=0; odd=0;
        scanf("%d\n",&len);
        rep (j,0,2*len) {
            scanf("%d ",&curr);
            (curr%2==0) ? even++:odd++;
        }
        (even==odd) ? printf("Yes\n"):printf("No\n");
    }
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int phoenix(int n) {
    return pow(2,n+1)-2;
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int curr; scanf("%d\n",&curr);
        printf("%d\n",phoenix(curr/2));
    }
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int min(int x, int y) {
    return (x<y) ? x:y;
}
int max(int x, int y) {
    return (x>y) ? x:y;
}
int mvn(int sum, int last) {
    if (sum==0) return 0;
    return 10*mvn(max(sum-last,0),last-1)+min(sum,last);
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int s; scanf("%d\n",&s);
        printf("%d\n",mvn(s,9));
    }
    return 0;
}

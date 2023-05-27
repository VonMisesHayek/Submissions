#include <stdio.h>
#include <limits.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int max(int x, int y) {
    return (x>y) ? x:y;
}
int min(int x, int y) {
    return (x<y) ? x:y;
}
int dist(int length) {
    int M=INT_MIN,m=INT_MAX,curr;
    rep (i,0,length) {
        scanf("%d",&curr);
        M=max(M,curr);
        m=min(m,curr);
    }
    return M-m;
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int len; scanf("%d\n",&len);
        printf("%d\n",dist(len));
    }
    return 0;
}

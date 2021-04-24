#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int correct(int n, int a, int b, int c, int d) {
    return !((n*(a+b)<c-d) || (n*(a-b)>c+d));
}
int main() {
    int queries,n,a,b,c,d;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d %d %d\n",&n,&a,&b,&c,&d);
        (correct(n,a,b,c,d)) ? printf("Yes\n"):printf("No\n");
    }
    return 0;
}

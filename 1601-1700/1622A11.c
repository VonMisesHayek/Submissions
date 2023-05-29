#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int construct(int a, int b, int c) {
    if (a==(b+c) || b==(c+a) || c==(a+b)) return 1;
    if ((a%2==0 && b==c) || (b%2==0 && a==c) || (c%2==0 && a==b)) return 1;
    return 0;
}
int main() {
    int queries,a,b,c; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d\n",&a,&b,&c);
        (construct(a,b,c)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

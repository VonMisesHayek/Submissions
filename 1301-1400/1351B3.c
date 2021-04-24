#include <stdio.h>
int square(int a, int b, int c, int d) {
    return ((a==c && a==b+d) || (a==d && a==b+c) || (b==d && b==a+c) || (b==c && b==a+d));
}
int main() {
    int queries,a,b,c,d;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d\n%d %d\n",&a,&b,&c,&d);
        (square(a,b,c,d)) ? printf("Yes\n"):printf("No\n");
    }
    return 0;
}

#include <stdio.h>
int before(int a, int b, int c, int d) {
    return (b>a)+(c>a)+(d>a);
}
int main() {
    int queries,a,b,c,d; scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d %d %d\n",&a,&b,&c,&d);
        printf("%d\n",before(a,b,c,d));
    }
    return 0;
}

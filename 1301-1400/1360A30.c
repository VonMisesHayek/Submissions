#include <stdio.h>
int min(int x, int y) {
    return (x<=y) ? x:y;
}
int max(int x, int y) {
    return (x>=y) ? x:y;
}
int minimal(int a, int b) {
    int x=min(a,b),y=max(a,b);
    return (2*x<=y) ? y*y:4*x*x;
}
int main() {
    int queries,a,b; scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d\n",&a,&b);
        printf("%d\n",minimal(a,b));
    }
    return 0;
}

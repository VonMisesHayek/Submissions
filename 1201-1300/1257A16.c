#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int max(int x, int y) {
    return -min(-x,-y);
}
int distance(int n, int x, int a, int b) {
    int f=min(a,b),s=max(a,b);
    if (x>=(f+n-s)) {
        return n-1;
    } else {
        return (s-f+x);
    }
}
int main() {
    int queries,n,x,a,b;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d %d %d\n",&n,&x,&a,&b);
        printf("%d\n",distance(n,x,a,b));
    }
    return 0;
}

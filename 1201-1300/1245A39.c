#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
    if (a>b) {
        return gcd(a-b,b);
    } else if (a<b) {
        return gcd(a,b-a);
    } else {
        return a;
    }
}
int main() {
    int queries,a,b;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d\n",&a,&b);
        if (gcd(a,b)>1) {
            printf("Infinite\n");
        } else {
            printf("Finite\n");
        }
    }
    return 0;
}

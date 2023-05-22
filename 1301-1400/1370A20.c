#include <stdio.h>
int main() {
    int queries; scanf("%d\n",&queries);
    long n;
    for (int i=0; i<queries; i++) {
        scanf("%ld\n",&n);
        printf("%ld\n",n/2);
    }
    return 0;
}

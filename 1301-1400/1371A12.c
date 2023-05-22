#include <stdio.h>
int main() {
    int queries; scanf("%d\n",&queries);
    long curr;
    for (int i=0; i<queries; i++) {
        scanf("%ld\n",&curr);
        printf("%ld\n",(curr+1)/2);
    }
    return 0;
}

#include <stdio.h>
void sum(long n) {
    if (n>=31) {
        printf("YES\n");
        if (n!=36 && n!=40 && n!=44) {
            printf("6 10 14 %ld\n",n-30);
        } else if (n==36) {
            printf("6 10 15 5\n");
        } else if (n==40) {
            printf("6 10 15 9\n");
        } else if (n==44) {
            printf("10 14 15 5\n");
        }
    } else {
        printf("NO\n");
    }
}
int main() {
    int queries; scanf("%d\n",&queries);
    long curr;
    for (int i=0; i<queries; i++) {
        scanf("%ld\n",&curr);
        sum(curr);
    }
    return 0;
}

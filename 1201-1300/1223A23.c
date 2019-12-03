#include <stdio.h>
int match(long long n) {
    if (n==2) {
        return 2;
    } else if (n%2) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int queries;
    long long n;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d\n",&n);
        printf("%d\n",match(n));
    }
    return 0;
}

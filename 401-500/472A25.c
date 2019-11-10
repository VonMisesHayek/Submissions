#include <stdio.h>
int main() {
    long n;
    scanf("%ld",&n);
    if (n%2==0) {
        printf("%ld %ld",4,n-4);
    } else {
        printf("%ld %ld",9,n-9);
    }
    return 0;
}

#include <stdio.h>
int main() {
    long n;
    scanf("%ld",&n);
    if (n==1) {
        printf("9 8");
    } else {
        printf("%ld %ld",3*n,2*n);
    }
    return 0;
}

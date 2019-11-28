#include <stdio.h>
int main() {
    long long n;
    scanf("%I64d",&n);
    if (n%2==0) {
        printf("%I64d",n/2);
    } else {
        printf("%I64d",-n/2-1);
    }
    return 0;
}

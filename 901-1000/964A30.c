#include <stdio.h>
long long weights(long long n) {
    return n/2+1;
}
int main() {
    long long num;
    scanf("%I64d",&num);
    printf("%I64d",weights(num));
    return 0;
}

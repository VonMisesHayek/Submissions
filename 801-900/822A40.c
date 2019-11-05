#include <stdio.h>
int factorial(long n) {
    if (n==1) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}
int main() {
    long a,b;
    scanf("%d %d",&a,&b);
    if (a<=b) {
        printf("%d",factorial(a));
    } else {
        printf("%d",factorial(b));
    }
    return 0;
}

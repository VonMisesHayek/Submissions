#include <stdio.h>
#include <math.h>
int is_prime(long n) {
    long lim=sqrt(n);
    for (int i=2; i<=lim; i++) {
        if (n%i==0) return 0;
    }
    return 1;
}
long counterexample(int n) {
    long counter=1;
    while (is_prime(n*counter+1)==1) {
        counter++;
    }
    return counter;
}
int main() {
    int test;
    scanf("%d",&test);
    printf("%ld",counterexample(test));
    return 0;
}

#include <stdio.h>
#include <math.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int is_prime(int n) {
    if (n<=3) {
        return 1;
    } else if (n%2==0) {
        return 0;
    } else {
        int root=sqrt(n);
        rep (i,3,root+1) {
            if (n%i==0) return 0;
        }
        return 1;
    }
}
long minper(int n) {
    if (is_prime(n)) {
        return 2+2*n;
    } else {
        int root=sqrt(n);
        for (int i=root+1; i>1; i--) {
            if (n%i==0) return (2*i+2*(n/i));
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",minper(n));
    return 0;
}

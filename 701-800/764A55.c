#include <stdio.h>
long gcd(long x, long y) {
    if (x-y==1 || y-x==1) {
        return 1;
    } else if (x==1 || y==1) {
        return 1;
    } else if (x<y) {
        return gcd(x,y-x);
    } else if (x>y) {
        return gcd(x-y,y);
    } else {
        return x;
    }
}
long mcm(long x, long y) {
    return (x/gcd(x,y))*y;
}
long kills(long n, long m, long z) {
    return z/mcm(n,m);
}
int main() {
    long n,m,z;
    scanf("%ld %ld %ld",&n,&m,&z);
    printf("%ld",kills(n,m,z));
    return 0;
}

#include <stdio.h>
int powers(long n) {
    int res=0;
    long a=n;
    while (a%2==0) {
        res++;
        a/=2;
    }
    while (a%3==0) {
        res++;
        a/=3;
    }
    if (a==1) {
        return res;
    } else {
        return -1;
    }
}
int moves(long n, long m) {
    if (m%n!=0) {
        return -1;
    } else {
        return powers(m/n);
    }
}
int main() {
    long n,m;
    scanf("%ld %ld",&n,&m);
    printf("%d",moves(n,m));
    return 0;
}

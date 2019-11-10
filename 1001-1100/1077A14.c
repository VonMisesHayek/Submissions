#include <stdio.h>
long long final(long long a, long long b, long long k) {
    long long aux=a-b;
    long long lim=k/2;
    if (k%2==0) {
        return aux*lim;
    } else {
        return aux*lim+a;
    }
}
int main() {
    int quer;
    long long a,b,k;
    scanf("%d\n",&quer);
    for (int i=0; i<quer; i++) {
        scanf("%lld %lld %lld\n",&a,&b,&k);
        printf("%lld\n",final(a,b,k));
    }
    return 0;
}

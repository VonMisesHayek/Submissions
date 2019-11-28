#include <stdio.h>
long long specs(long long n, long long k, long long t) {
    if (t<=k) {
        return t;
    } else if (t>n) {
        return n+k-t;
    } else {
        return k;
    }
}
int main() {
    long long n,k,t;
    scanf("%I64d %I64d %I64d",&n,&k,&t);
    printf("%I64d",specs(n,k,t));
    return 0;
}

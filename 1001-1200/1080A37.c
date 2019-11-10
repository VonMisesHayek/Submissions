#include <stdio.h>
long long note(long long n, long long k) {
    long long sum=(2*n)/k+(5*n)/k+(8*n)/k;
    if ((2*n)%k!=0) sum++;
    if ((5*n)%k!=0) sum++;
    if ((8*n)%k!=0) sum++;
    return sum;
}
int main() {
    long long n,k;
    scanf("%lld %lld",&n,&k);
    printf("%lld",note(n,k));
    return 0;
}

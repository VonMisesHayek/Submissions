#include <stdio.h>
long long max(long long a, long long b, long long c) {
    if (a>=b && a>=c) {
        return a;
    } else if (b>=a && b>=c) {
        return b;
    } else {
        return c;
    }
}
long long min(long long a, long long b, long long c) {
    return -max(-a,-b,-c);
}
long long secs(long long a, long long b, long long c, long long d) {
    long long sup=max(a,b,c),inf=min(a,b,c),res=0;
    long long mid=a+b+c-sup-inf;
    if (sup-mid<d) res+=(d+mid-sup);
    if (mid-inf<d) res+=(d-mid+inf);
    return res;
}
int main() {
    long long a,b,c,d;
    scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d);
    printf("%I64d",secs(a,b,c,d));
    return 0;
}

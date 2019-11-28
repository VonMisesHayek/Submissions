#include <stdio.h>
long long buy(long long n, long long a, long long b) {
    long long q;
    if ((b-2*a)<0 && n>=2) {
        q=n/2;
        return (n-2*q)*a+q*b;
    } else {
        return a*n;
    }
}
int main() {
    int queries;
    long long n,a,b;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&n,&a,&b);
        printf("%I64d\n",buy(n,a,b));
    }
    return 0;
}

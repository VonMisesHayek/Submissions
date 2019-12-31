#include <stdio.h>
typedef unsigned long long ull;
ull height(ull n, ull k) {
    return k/n+(k%n!=0);
}
int main() {
    ull n,k;
    scanf("%I64d %I64d",&n,&k);
    printf("%I64d",height(n,k));
    return 0;
}

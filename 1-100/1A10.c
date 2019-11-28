#include <stdio.h>
long long square(long long x, long long y, long long z) {
    return (x/z+1-(x%z==0))*(y/z+1-(y%z==0));
}
int main() {
    long long n,m,a;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    printf("%I64d",square(n,m,a));
    return 0;
}

#include <stdio.h>
long long mark(long long x, long long y, long long z, long long w) {
    return (2*x+2*y+2*w+4);
}
int main() {
    long long w1,h1,w2,h2;
    scanf("%I64d %I64d %I64d %I64d",&w1,&h1,&w2,&h2);
    printf("%I64d",mark(w1,h1,w2,h2));
    return 0;
}

#include <stdio.h>
long long min(long long x, long long y) {
    if (x<=y) {
        return x;
    } else {
        return y;
    }
}
long long good(long long x, long long y, long long z) {
    return 2*z+2*min(x,y)+(x!=y);
}
int main() {
    long long a,b,c;
    scanf("%I64d %I64d %I64d",&a,&b,&c);
    printf("%I64d",good(a,b,c));
    return 0;
}

#include <stdio.h>
long long dist(long long x, long long y, long long z) {
    if (x+y<=z) {
        return 2*(x+y);
    } else if (y+z<=x) {
        return 2*(y+z);
    } else if (x+z<=y) {
        return 2*(x+z);
    } else {
        return x+y+z;
    }
}
int main() {
    long long a,b,c;
    scanf("%I64d %I64d %I64d",&a,&b,&c);
    printf("%I64d",dist(a,b,c));
    return 0;
}

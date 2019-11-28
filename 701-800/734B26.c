#include <stdio.h>
long long min(long long x, long long y, long long z) {
    if (x<=y && x<=z) {
        return x;
    } else if (y<=x && y<=z) {
        return y;
    } else {
        return z;
    }
}
long long mini(long long x, long long y) {
    return x*(x<=y)+y*(y<x);
}
int main() {
    long long two,three,five,six;
    scanf("%I64d %I64d %I64d %I64d",&two,&three,&five,&six);
    long long gre=min(two,five,six);
    two-=gre;
    printf("%I64d",gre*256+32*mini(two,three));
    return 0;
}

#include <stdio.h>
int can(long x, long y, long z, long a, long b, long c) {
    if (x<=a) {
        if (y<=(a-x+b)) {
            if (z<=(a-x+b-y+c)) return 1;
        }
    }
    return 0;
}
int main() {
    long x,y,z,a,b,c;
    scanf("%ld %ld %ld\n%ld %ld %ld",&x,&y,&z,&a,&b,&c);
    if (can(x,y,z,a,b,c)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

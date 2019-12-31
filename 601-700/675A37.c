#include <stdio.h>
int same_sign(long x, long y) {
    return ((x>0 && y>0) || (x<0 && y<0));
}
int belongs(long a, long b, long c) {
    if (c==0) return (a==b);
    if (a==b) return 1;
    return ((b-a)%c==0 && same_sign((b-a),c));
}
int main() {
    long a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    if (belongs(a,b,c)) {
        printf("YES");
    } else {
        printf("NO");
    }
}

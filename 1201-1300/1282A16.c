#include <stdio.h>
long min(long x, long y) {
    return (x<=y) ? x:y;
}
long max(long x, long y) {
    return (x>=y) ? x:y;
}
long minutes(long a, long b, long c, long r) {
    long m=min(a,b),s=max(a,b);
    if (c+r<=m || c-r>=s) {
        return s-m;
    } else {
        return s-m-min(s,c+r)+max(m,c-r);
    }
}
int main() {
    int queries;
    long a,b,c,r;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%ld %ld %ld %ld\n",&a,&b,&c,&r);
        printf("%ld\n",minutes(a,b,c,r));
    }
    return 0;
}

#include <stdio.h>
void absorption(long *h) {
    *h=(*h)/2+10;
}
void lightning_strike(long *h) {
    (*h)-=10;
}
int cast(long *h, int n, int m) {
    int a=0;
    while (a<n && (*h)>=20) {
        absorption(h);
        a++;
    }
    return ((*h-10*m)<=0);
}
int main() {
    int queries,n,m; scanf("%d\n",&queries);
    long hit;
    for (int i=0; i<queries; i++) {
        scanf("%ld %d %d\n",&hit,&n,&m);
        (cast(&hit,n,m)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef unsigned long long ull;
ull least(ull p, ull x) {
    return (p%x==0) ? 0:x-p%x;
}
ull min(ull x, ull y) {
    return (x<y) ? x:y;
}
ull sol(ull p, ull a, ull b, ull c) {
    return min(min(least(p,a),least(p,b)),least(p,c));
}
int main() {
    int queries; scanf("%d\n",&queries);
    ull p,a,b,c;
    rep (i,0,queries) {
        scanf("%llu %llu %llu %llu\n",&p,&a,&b,&c);
        printf("%llu\n",sol(p,a,b,c));
    }
    return 0;
}

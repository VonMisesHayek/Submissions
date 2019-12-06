#include <stdio.h>
long long min(long long x, long long y) {
    return x*(x<=y)+y*(y<x);
}
long long max(long long x, long long y) {
    return x*(x>=y)+y*(y>x);
}
long long maxx(long long x, long long y) {
    return max(max(x,y),1);
}
void intersect(long long x, long long y, long long *mi, long long *ma) {
    *mi=maxx(x,*mi);
    *ma=min(y,*ma);
}
int main() {
    int queries,prod;
    long long diff,curr,x,y,inf,sup;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %I64d\n",&prod,&diff);
        inf=0;
        sup=200000000;
        for (int i=0; i<prod; i++) {
            scanf("%I64d",&curr);
            intersect(curr-diff,curr+diff,&inf,&sup);
        }
        if (inf<=sup) {
            printf("%I64d\n",sup);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}

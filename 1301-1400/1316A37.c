#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
long sum(int n, long *first) {
    long res=0,curr;
    scanf("%ld",&curr);
    *first=curr;
    rep (i,1,n) {
        scanf("%ld",&curr);
        res+=curr;
    } scanf("\n");
    return res;
}
long m(long x, long y) {
    return (x<y) ? x:y;
}
long maximize(long s, long first, long ma) {
    return m(first+s,ma);
}
int main() {
    int queries,len;
    long max,f,s;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %ld\n",&len,&max);
        s=sum(len,&f);
        printf("%ld\n",maximize(s,f,max));
    }
    return 0;
}

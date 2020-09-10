#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
typedef long long ll;
void scan(ll *arr, long length) {
    rep (i,0,length) scanf("%I64d",(arr+i));
}
void construct(ll *b, long length) {
    ll a[length],x[length],max=-1;
    x[0]=0;
    rep (i,0,length-1) {
        a[i]=x[i]+b[i];
        if (a[i]>max) max=a[i];
        x[i+1]=max;
    }
    a[length-1]=x[length-1]+b[length-1];
    rep (i,0,length) printf("%I64d ",*(a+i));
}
int main() {
    long len;
    scanf("%ld\n",&len);
    ll final[len];
    scan(final,len);
    construct(final,len);
    return 0;
}

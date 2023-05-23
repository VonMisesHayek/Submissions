#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
typedef long long ll;
int cmp(const void *a, const void *b) {
    return (*(ll*)b-*(ll*)a);
}
ll sum(ll *arr, long length) {
    ll res=0;
    rep (i,0,length) res+=arr[i];
    return res;
}
int main() {
    long len,lenc; scanf("%ld\n",&len);
    ll bars[len],total; rep(i,0,len) scanf("%I64d",(bars+i));
    qsort(bars,len,sizeof(ll),cmp);
    scanf("%ld\n",&lenc);
    int coup[lenc]; rep (i,0,lenc) scanf("%d",(coup+i));
    total=sum(bars,len);
    rep (i,0,lenc) printf("%I64d\n",total-bars[coup[i]-1]);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
typedef long long ll;
int cmp(const void *a, const void *b) {
    return (*(int*)a-*(int*)b);
}
void scan(int *arr, long length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
ll dist(int *arr, long length) {
    qsort(arr,length,sizeof(int),cmp);
    long lim=length/2;
    ll x=0,y=0;
    rep (i,0,lim) x+=arr[i];
    rep (i,lim,length) y+=arr[i];
    return x*x+y*y;
}
int main() {
    long len; scanf("%ld\n",&len);
    int sticks[len]; scan(sticks,len);
    printf("%I64d",dist(sticks,len));
    return 0;
}

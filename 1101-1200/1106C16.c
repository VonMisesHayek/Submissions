#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
typedef long long ll;
int cmp(const void *a, const void *b) {
    return (*(int*)a-*(int*)b);
}
ll sum(int *arr, long length) {
    ll res=0,lim=length/2;
    qsort(arr,length,sizeof(int),cmp);
    rep (i,0,lim) res+=((int) pow(arr[i]+arr[length-i-1],2));
    return res;
}
int main() {
    long len; scanf("%ld\n",&len);
    int nums[len]; rep (i,0,len) scanf("%d",(nums+i));
    printf("%I64d",sum(nums,len));
}

#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
void read(long *arr, long length) {
    long curr;
    rep (i,0,length) *(arr+i)=0;
    rep (i,0,length) {
        scanf("%ld",&curr);
        arr[curr-1]=1;
    }
}
long forgot(long *arr, long length) {
    rep (i,0,length) {
        if (arr[i]==0) return i+1;
    }
}
int main() {
    long len;
    scanf("%ld\n",&len);
    long ep[len];
    read(ep,len);
    printf("%ld",forgot(ep,len));
    return 0;
}

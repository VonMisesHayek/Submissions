#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
typedef unsigned long long ull;
void scan(long *arr, long length) {
    rep (i,0,length) scanf("%ld",(arr+i));
}
int equalize(long *arr, long length, long k) {
    long mod=arr[0]%k;
    rep (i,1,length) {
        if (arr[i]%k!=mod) return 0;
    }
    return 1;
}
long min(long *arr, long length) {
    long res=1000000001;
    rep (i,0,length) {
        if (arr[i]<res) res=arr[i];
    }
    return res;
}
void solution(long *arr, long length, long k) {
    if (equalize(arr,length,k)) {
        ull sum=0;
        long m=min(arr,length);
        rep (i,0,length) sum+=(arr[i]-m);
        sum/=k;
        printf("%llu",sum);
    } else {
        printf("-1");
    }
}
int main() {
    long len,dec;
    scanf("%ld %ld\n",&len,&dec);
    long share[len];
    scan(share,len);
    solution(share,len,dec);
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
void scan(long *arr, long length) {
    rep (i,0,length) scanf("%ld",(arr+i));
}
long max(long x, long y) {
    return (x>y) ? x:y;
}
long walk(long *arr, long length) {
    if (arr[0]!=arr[length-1]) return length-1;
    long first=arr[0];
    rep (i,1,length-1) {
        if (arr[i]!=first || arr[length-1-i]!=first) return max(i,length-1-i);
    }
}
int main() {
    long len; scanf("%ld\n",&len);
    long house[len]; scan(house,len);
    printf("%ld",walk(house,len));
    return 0;
}

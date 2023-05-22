#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
void scan(int *arr, long length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
long max(int *arr, int length) {
    long res=0;
    for (int i=0; i<length; i++) {
        if (arr[i]>res) res=arr[i];
    }
    return res;
}
long replace(int *arr, long length) {
    long mod[]={0,0,0};
    rep (i,0,length) mod[arr[i]-1]++;
    long m=max(mod,3);
    return length-m;
}
int main() {
    long len; scanf("%ld\n",&len);
    int seq[len]; scan(seq,len);
    printf("%ld",replace(seq,len));
    return 0;
}

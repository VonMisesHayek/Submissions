#include <stdio.h>
typedef long long ll;
void scan(ll *arr, long length) {
    for (long i=0; i<length; i++) scanf("%I64d",(arr+i));
}
void add(ll *arr, int length) {
    ll m=0;
    ll save[length];
    for (long i=length-1; i>=0; i--) {
        if (m==arr[i]) {
            save[i]=1;
        } else if (m<arr[i]) {
            save[i]=0;
            m=arr[i];
        } else {
            save[i]=m-arr[i]+1;
        }
    }
    for (long i=0; i<length; i++) printf("%I64d ",save[i]);
}
int main() {
    long len;
    scanf("%ld\n",&len);
    ll house[len]; scan(house,len);
    add(house,len);
    return 0;
}

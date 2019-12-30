#include <stdio.h>
typedef long long ll;
void read(ll *arr, long length) {
    for (long i=0; i<length; i++) scanf("%I64d",(arr+i));
}
long indmin(ll *arr, long length) {
    ll min=arr[0];
    long index=0;
    for (long i=1; i<length; i++) {
        if (arr[i]<min) {
            min=arr[i];
            index=i;
        }
    }
    return index;
}
long leave(ll *arr, long length) {
    long index=indmin(arr,length);
    ll min=arr[index];
    for (long i=0; i<length; i++) {
        if (arr[i]==min && i!=index) return 0;
    }
    return (index+1);
}
int main() {
    long len,res;
    scanf("%ld\n",&len);
    ll times[len];
    read(times,len);
    res=leave(times,len);
    if (res!=0) {
        printf("%ld",res);
    } else {
        printf("Still Rozdil");
    }
    return 0;
}

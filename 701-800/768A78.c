#include <stdio.h>
void read(long *arr, long length) {
    for (long i=0; i<length; i++) scanf("%ld",&arr[i]);
}
void maxmin(long *arr, long length, long *inf, long *sup) {
    *inf=arr[0];
    *sup=arr[0];
    for (long i=1; i<length; i++) {
        if ((*inf)>arr[i]) {
            *inf=arr[i];
        } else if ((*sup)<arr[i]) {
            *sup=arr[i];
        }
    }
}
long support(long *arr, long length, long inf, long sup) {
    long res=0;
    for (long i=0; i<length; i++) {
        if (inf<arr[i] && arr[i]<sup) res++;
    }
    return res;
}
int main() {
    long len,max,min;
    scanf("%ld\n",&len);
    long stewards[len];
    read(stewards,len);
    maxmin(stewards,len,&min,&max);
    printf("%ld",support(stewards,len,min,max));
    return 0;
}

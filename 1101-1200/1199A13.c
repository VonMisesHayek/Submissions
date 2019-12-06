#include <stdio.h>
void read(long *arr, long length) {
    for (long i=0; i<length; i++) scanf("%ld",(arr+i));
}
long min(long x, long y) {
    return x*(x<=y)+y*(x>y);
}
long max(long x, long y) {
    return x*(x>=y)+y*(x<y);
}
int notso(long *arr, long length, long before, long after, long index) {
    long bound=arr[index]+1;
    long low=max(0,index-before),upp=min(length,index+after+1);
    for (long i=low; i<index; i++) {
        if (arr[i]<bound) bound=arr[i];
    }
    for (long i=index+1; i<upp; i++) {
        if (arr[i]<bound) bound=arr[i];
    }
    return (arr[index]<bound);
}
long day(long *arr, long length, long before, long after) {
    for (long i=0; i<length; i++) {
        if (notso(arr,length,before,after,i)) return (i+1);
    }
}
int main() {
    long len,bef,aft;
    scanf("%ld %ld %ld\n",&len,&bef,&aft);
    long rain[len];
    read(rain,len);
    printf("%ld",day(rain,len,bef,aft));
    return 0;
}

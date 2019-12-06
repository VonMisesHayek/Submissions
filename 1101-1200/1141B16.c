#include <stdio.h>
void read(int *arr, long length) {
    for (long i=0; i<length; i++) scanf("%d",(arr+i));
}
void duplex(int *arr, int *save, int length) {
    for (long i=0; i<length; i++) {
        save[i]=arr[i];
        save[i+length]=arr[i];
    }
}
long rest(int *arr, long length) {
    long max=0,curlen=0,lim=2*length;
    int keep=0,save[lim];
    duplex(arr,save,length);
    for (long i=0; i<lim; i++) {
        if (save[i]==0 || i==lim) {
            if (max<curlen) max=curlen;
            curlen=0; keep=0;
        } else if (save[i]) {
            if (keep==0) {
                keep=1;
            }
            curlen++;
        }
    }
    return max;
}
int main() {
    long len;
    scanf("%ld\n",&len);
    int schedule[len];
    read(schedule,len);
    printf("%ld",rest(schedule,len));
    return 0;
}

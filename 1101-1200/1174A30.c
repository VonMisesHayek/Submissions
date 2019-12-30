#include <stdio.h>
void read(long *arr, int length) {
    for (int i=0; i<length; i++) scanf("%ld",(arr+i));
}
void write(long *arr, int length) {
    for (int i=0; i<length; i++) printf("%ld ",*(arr+i));
}
int thanos(long *arr, int length) {
    for (int i=0; i<length-1; i++) {
        if (arr[i]!=arr[i+1]) return 0;
    }
    return 1;
}
void sort(long *arr, int length) {
    long temp;
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main() {
    int n,len;
    scanf("%d\n",&n);
    len=2*n;
    long nums[len];
    read(nums,len);
    if (thanos(nums,len)) {
        printf("-1");
    } else {
        sort(nums,len);
        write(nums,len);
    }
    return 0;
}

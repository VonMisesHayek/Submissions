#include <stdio.h>
void scan(long long *arr, int length) {
    for (int i=0; i<length; i++) scanf("%I64d",(arr+i));
}
void print(long long *arr, int length) {
    for (int i=0; i<length; i++) printf("%I64d ",*(arr+i));
}
void sort(long long *arr, int length) {
    long long temp;
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
long long ways(long long *arr, int length, int cut) {
    sort(arr,length);
    return (arr[length-cut]-arr[length-cut-1]);
}
int main() {
    int len,pet,vas;
    scanf("%d %d %d\n",&len,&pet,&vas);
    long long comp[len];
    scan(comp,len);
    printf("%I64d",ways(comp,len,pet));
    return 0;
}

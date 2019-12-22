#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void sort(int *arr, int length) {
    int temp;
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
int secmin(int *arr, int length) {
    sort(arr,length);
    int tok=arr[0];
    for (int i=0; i<length; i++) {
        if (arr[i]>tok) return arr[i];
    }
    return -101;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int stat[len];
    read(stat,len);
    int res=secmin(stat,len);
    if (res!=-101) {
        printf("%d",res);
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
void sort(int *arr, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main() {
    int len;
    scanf("%d",&len);
    int list[len];
    for (int i=0; i<len; i++) scanf("%d",&list[i]);
    sort(list,len);
    if (len%2==0) {
        printf("%d",list[len/2-1]);
    } else {
        printf("%d",list[(len-1)/2]);
    }
    return 0;
}

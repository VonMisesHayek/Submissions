#include <stdio.h>
void sort(int *arr, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]<arr[j]) {
                int aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
        }
    }
}
int opt(int *arr, int length, int size) {
    int sum=0;
    int pos=0;
    int still=0;
    while (pos<length && still==0) {
        sum+=arr[pos];
        if (sum>=size) still=1;
        pos++;
    }
    return pos;
}
int main() {
    int usb,file;
    scanf("%d\n%d",&usb,&file);
    int list[usb];
    for (int i=0; i<usb; i++) scanf("%d",&list[i]);
    sort(list,usb);
    printf("%d",opt(list,usb,file));
    return 0;
}

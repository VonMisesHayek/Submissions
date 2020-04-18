#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void auction(int *arr, int length, int *ind, int *p) {
    *ind=0;
    int max=arr[0],secmax=0;
    for (int i=1; i<length; i++) {
        if (arr[i]>max) {
            secmax=max;
            max=arr[i];
            *ind=i;
        } else if (arr[i]>secmax) {
            secmax=arr[i];
        }
    }
    *p=secmax;
}
int main() {
    int len,index,price;
    scanf("%d\n",&len);
    int bidd[len];
    read(bidd,len);
    auction(bidd,len,&index,&price);
    printf("%d %d",index+1,price);
    return 0;
}

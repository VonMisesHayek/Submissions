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
int sale(int *arr, int length, int max) {
    int buy=0,pos=0,res=0;
    sort(arr,length);
    while (buy<max && pos<length) {
        if (arr[pos]<0) {
            res-=arr[pos];
            buy++;
        }
        pos++;
    }
    return res;
}
int main() {
    int tv,carry;
    scanf("%d %d\n",&tv,&carry);
    int prices[tv];
    for (int i=0; i<tv; i++) scanf("%d",&prices[i]);
    printf("%d",sale(prices,tv,carry));
    return 0;
}

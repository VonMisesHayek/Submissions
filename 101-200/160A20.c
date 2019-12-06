#include <stdio.h>
void sort(int *arr, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]<arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int minimum(int *arr, int length, int total) {
    int pos=0,rel=0;
    while (pos<length) {
        rel+=arr[pos];
        pos++;
        if (rel>total/2) return pos;
    }
    return pos;
}
int main() {
    int len,sum=0;
    scanf("%d\n",&len);
    int coins[len];
    for (int i=0; i<len; i++) {
        scanf("%d",&coins[i]);
        sum+=coins[i];
    }
    sort(coins,len);
    printf("%d",minimum(coins,len,sum));
    return 0;
}

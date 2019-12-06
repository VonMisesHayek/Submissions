#include <stdio.h>
int difficulty(int *arr, int length, int index) {
    int max=0;
    for (int i=1; i<length; i++) {
        if (i!=index) {
            if (max<(arr[i]-arr[i-1])) max=arr[i]-arr[i-1];
        } else {
            if (max<(arr[i+1]-arr[i-1])) max=arr[i+1]-arr[i-1];
        }
    }
    return max;
}
int remov(int *arr, int length) {
    int min=1001,temp;
    for (int i=1; i<length-1; i++) {
        temp=difficulty(arr,length,i);
        if (min>temp) min=temp;
    }
    return min;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int holds[len];
    for (int i=0; i<len; i++) scanf("%d",&holds[i]);
    printf("%d",remov(holds,len));
    return 0;
}

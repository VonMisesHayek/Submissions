#include <stdio.h>
int min(int x, int y) {
    if (x<=y) {
        return x;
    } else {
        return y;
    }
}
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
int watch(int *arr, int length) {
    int res=min(15,arr[0]),pos=0;
    if (arr[0]>15) return res;
    while (pos+1<length && (arr[pos+1]-arr[pos])<=15) {
        res=arr[pos+1];
        pos++;
    }
    res=min(arr[pos]+15,90);
    return res;
}
int main() {
    int bear;
    scanf("%d\n",&bear);
    int mins[bear];
    read(mins,bear);
    printf("%d",watch(mins,bear));
    return 0;
}

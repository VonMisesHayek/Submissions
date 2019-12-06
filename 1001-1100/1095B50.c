#include <stdio.h>
int secmax(int *arr, int length) {
    int res=0,max=arr[0];
    for (int i=1; i<length; i++) {
        if (max<=arr[i]) {
            res=max;
            max=arr[i];
        } else if (max>arr[i] && arr[i]>res) {
            res=arr[i];
        }
    }
    return res;
}
int secmin(int *arr, int length) {
    int res=100001,min=arr[0];
    for (int i=1; i<length; i++) {
        if (min>=arr[i]) {
            res=min;
            min=arr[i];
        } else if (min<arr[i] && arr[i]<res) {
            res=arr[i];
        }
    }
    return res;
}
int min(int *arr, int length) {
    int res=arr[0];
    for (int i=1; i<length; i++) {
        if (arr[i]<res) res=arr[i];
    }
    return res;
}
int max(int *arr, int length) {
    int res=arr[0];
    for (int i=1; i<length; i++) {
        if (res<arr[i]) res=arr[i];
    }
    return res;
}
int instability_reduce(int *arr, int length) {
    int first=secmax(arr,length)-min(arr,length);
    int second=max(arr,length)-secmin(arr,length);
    return first*(first<=second)+second*(first>second);
}
int main() {
    int len;
    scanf("%d\n",&len);
    int nums[len];
    for (int i=0; i<len; i++) scanf("%d",&nums[i]);
    printf("%d",instability_reduce(nums,len));
    return 0;
}

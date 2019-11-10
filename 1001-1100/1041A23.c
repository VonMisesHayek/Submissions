#include <stdio.h>
void sort(long long *arr, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]>arr[j]) {
                long long temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
long long heist(long long *arr, int length) {
    long long count=0;
    for (int i=1; i<length; i++) count+=(arr[i]-arr[i-1]-1);
    return count;
}
int main() {
    int len;
    scanf("%d\n",&len);
    long long keys[len];
    for (int i=0; i<len; i++) scanf("%lld",&keys[i]);
    sort(keys,len);
    printf("%lld",heist(keys,len));
    return 0;
}

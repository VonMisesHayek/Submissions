#include <stdio.h>
#include <math.h>
int recon(long long *arr, long long d, int length) {
    int count=0;
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (abs(arr[i]-arr[j])<=d) {
                count+=2;
            }
        }
    }
    return count;
}
int main() {
    int len;
    long long diff;
    scanf("%d %I64d\n",&len,&diff);
    long long heights[len];
    for (int i=0; i<len; i++) scanf("%I64d",&heights[i]);
    printf("%d",recon(heights,diff,len));
    return 0;
}

#include <stdio.h>
int min(int *arr, int length) {
    int res=arr[0];
    for (int i=0; i<length; i++) {
        if (res>arr[i]) res=arr[i];
    }
    return res;
}
int main() {
    int len,curr;
    scanf("%d\n",&len);
    int cashiers[len],times[len];
    for (int i=0; i<len; i++) scanf("%d",&cashiers[i]);
    for (int i=0; i<len; i++) {
        times[i]=15*cashiers[i];
        for (int j=0; j<cashiers[i]; j++) {
            scanf("%d",&curr);
            times[i]+=5*curr;
        }
    }
    printf("%d",min(times,len));
    return 0;
}

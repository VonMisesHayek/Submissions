#include <stdio.h>
int in(long *arr, int length, long elem) {
    int res=0;
    int j=0;
    while (j<length && res==0) {
        if (arr[j]==elem) res=1;
        j++;
    }
    return res;
}
int buy(long *arr, int length) {
    int count=0;
    for (int i=0; i<length; i++) {
        count+=in(arr,i,arr[i]);
    }
    return count;
}
int main() {
    long shoes[4];
    for (int i=0; i<4; i++) scanf("%ld",&shoes[i]);
    printf("%d",buy(shoes,4));
    return 0;
}

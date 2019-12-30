#include <stdio.h>
#include <stdlib.h>
void read(long long *arr, int length) {
    for (int i=0; i<length; i++) scanf("%I64d",(arr+i));
}
void assign(long long *arr, int index, long long dist, long long *mi, long long *ma) {
    *mi=arr[index]-dist;
    *ma=arr[index]+dist;
}
int check_dist(long long *arr, long long length, long long cand, long long dist) {
    for (int i=0; i<length; i++) {
        if (llabs(arr[i]-cand)<dist) return 0;
    }
    return 1;
}
int build(long long *arr, int length, long long dist) {
    int count=0;
    long long inf,sup,prev=-2000000001;
    for (int i=0; i<length; i++) {
        assign(arr,i,dist,&inf,&sup);
        if (prev!=inf && check_dist(arr,length,inf,dist)) count++;
        if (check_dist(arr,length,sup,dist)) count++;
        prev=sup;
    }
    return count;
}
int main() {
    int len;
    long long dist;
    scanf("%d %I64d\n",&len,&dist);
    long long hotels[len];
    read(hotels,len);
    printf("%d",build(hotels,len,dist));
    return 0;
}

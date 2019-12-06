#include <stdio.h>
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
void fill(int *arr, int pos) {
    arr[pos-1]++;
}
int clear(int *arr, int length) {
    int keep=1,pos=0;
    while (pos<length && keep) {
        keep*=(arr[pos]!=0);
        pos++;
    }
    if (keep) {
        for (int i=0; i<length; i++) arr[i]--;
    }
    return keep;
}
int main() {
    int wid,len,curr,points=0;
    scanf("%d %d\n",&wid,&len);
    int hist[wid];
    initialize(hist,wid);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        fill(hist,curr);
        points+=clear(hist,wid);
    }
    printf("%d",points);
    return 0;
}

#include <stdio.h>
int payoff(int *arr, int length) {
    int sum=0;
    for (int i=0; i<length; i++) sum+=arr[i]*arr[i];
    return sum;
}
void fill(int *arr, int l, int h, int loc) {
    for (int i=l-1; i<h; i++) {
        if (arr[i]>loc) arr[i]=loc;
    }
}
int main() {
    int spots,max,rest;
    int low,high,local;
    scanf("%d %d %d",&spots,&max,&rest);
    int heights[spots];
    for (int i=0; i<spots; i++) heights[i]=max;
    for (int i=0; i<rest; i++) {
        scanf("%d %d %d",&low,&high,&local);
        fill(heights,low,high,local);
    }
    printf("%d",payoff(heights,spots));
    return 0;
}

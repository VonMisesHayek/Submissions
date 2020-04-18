#include <stdio.h>
#include <stdlib.h>
int max(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) {
        if (arr[i]>res) res=arr[i];
    }
    return res;
}
int max_dist(int x, int y, int n) {
    int four[4]={abs(x),abs(y),abs(n-1-x),abs(n-1-y)};
    return max(four,4);
}
int main() {
    int len,first,last,curr;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        if (curr==1) {
            first=i;
        } else if (curr==len) {
            last=i;
        }
    }
    printf("%d",max_dist(first,last,len));
    return 0;
}

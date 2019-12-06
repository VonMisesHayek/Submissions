#include <stdio.h>
int min(int *arr, int length) {
    int res=1000;
    for (int i=0; i<length; i++) {
        if (res>arr[i]) res=arr[i];
    }
    return res;
}
int max(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) {
        if (res<arr[i]) res=arr[i];
    }
    return res;
}
int main() {
    int buy,sell,bourles;
    scanf("%d %d %d\n",&buy,&sell,&bourles);
    int morning[buy],evening[sell];
    for (int i=0; i<buy; i++) scanf("%d",&morning[i]);
    scanf("\n");
    for (int i=0; i<sell; i++) scanf("%d",&evening[i]);
    int first=min(morning,buy),last=max(evening,sell);
    if (first>=last) {
        printf("%d",bourles);
    } else {
        printf("%d",last*(bourles/first)+bourles%first);
    }
    return 0;
}

#include <stdio.h>
int find(int *array, int query) {
    int pos=0;
    while (array[pos]!=query) {
        pos++;
    }
    return pos+1;
}
int main() {
    int len;
    scanf("%d",&len);
    int arr[len];
    for (int i=0; i<len; i++) {
        int add;
        scanf("%d",&add);
        arr[i]=add;
    }
    for (int i=0; i<len; i++) printf("%d ",find(arr,i+1));
    return 0;
}

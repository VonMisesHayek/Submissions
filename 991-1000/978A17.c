#include <stdio.h>
int is_last(int* array, int length, int check, int pos) {
    int res=1;
    int i=pos+1;
    while (i<length && res==1) {
        if (array[i]==check) res=0;
        i++;
    }
    return res;
}
int main() {
    int len;
    int count=0;
    scanf("%d",&len);
    int arr[len];
    int save[len];
    for (int i=0; i<len; i++) {
        int curr;
        scanf("%d",&curr);
        arr[i]=curr;
    }
    for (int i=0; i<len; i++) {
        if (is_last(arr,len,arr[i],i)) {
            save[count]=arr[i];
            count++;
        }
    }
    printf("%d\n",count);
    for (int i=0; i<count; i++) {
        printf("%d ",save[i]);
    }
    return 0;
}

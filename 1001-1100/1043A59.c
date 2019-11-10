#include <stdio.h>
int fsum(int *arr, int length, int max) {
    int res=0;
    for (int i=0; i<length; i++) {
        res+=(max-arr[i]);
    }
    return res;
}
int min(int *arr, int length, int elo, int max) {
    int k=max, awruk=fsum(arr,length,max);
    while (awruk<=elo) {
        k++;
        awruk+=length;
    }
    return k;
}
int main() {
    int len, elodreip=0, max=0, curr;
    scanf("%d\n",&len);
    int store[len];
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        elodreip+=curr;
        store[i]=curr;
        if (max<curr) max=curr;
    }
    printf("%d",min(store,len,elodreip,max));
    return 0;
}

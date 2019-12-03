#include <stdio.h>
void sort(int *arr, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int colors(int *arr, int *crib, int length) {
    int res=0;
    for (int i=0; i<length; i++) {
        if (crib[i]==0) {
            crib[i]=1;
            for (int j=i+1; j<length; j++) {
                if (arr[j]%arr[i]==0 && crib[j]==0) crib[j]=1;
            }
            res++;
        }
    }
    return res;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int list[len];
    int sieve[len];
    for (int i=0; i<len; i++) {
        scanf("%d",&list[i]);
        sieve[i]=0;
    }
    sort(list,len);
    printf("%d",colors(list,sieve,len));
    return 0;
}

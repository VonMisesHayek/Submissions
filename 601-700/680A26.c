#include <stdio.h>
int max(int a, int b) {
    return a*(a<=b)+b*(a>b);
}
int sum(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) res+=arr[i];
    return res;
}
int count(int *arr, int length, int elem) {
    int res=0;
    for (int i=0; i<length; i++) {
        if (arr[i]==elem) res++;
    }
    return res;
}
int minimum(int *arr, int length) {
    int min=sum(arr,length);
    int tot=min;
    for (int i=0; i<length; i++) {
        int aux=count(arr,length,arr[i]);
        if (aux>=2 && (min>tot-arr[i]*aux)) {
            min=tot-arr[i]*max(aux,3);
        }
    }
    return min;
}
int main() {
    int cards[5];
    for (int i=0; i<5; i++) scanf("%d",&cards[i]);
    printf("%d",minimum(cards,5));
    return 0;
}

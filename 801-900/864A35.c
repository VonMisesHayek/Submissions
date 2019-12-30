#include <stdio.h>
#define size 100
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) *(arr+i)=0;
}
int count(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) res+=arr[i];
    return res;
}
int fair(int *arr, int *siv, int *pet, int *vas, int length) {
    if (count(siv,length)!=2) return 0;
    int pos=0;
    while (arr[pos]==0) pos++;
    *pet=pos+1;
    pos++;
    while (arr[pos]==0) pos++;
    *vas=pos+1;
    return arr[(*pet)-1]==arr[(*vas)-1];
}
int main() {
    int len,curr,petya,vasya;
    scanf("%d\n",&len);
    int hist[size],sieve[size];
    initialize(hist,size);
    initialize(sieve,size);
    for (int i=0; i<len; i++) {
        scanf("%d\n",&curr);
        hist[curr-1]++;
        sieve[curr-1]=1;
    }
    if (fair(hist,sieve,&petya,&vasya,size)) {
        printf("YES\n%d %d",petya,vasya);
    } else {
        printf("NO");
    }
    return 0;
}

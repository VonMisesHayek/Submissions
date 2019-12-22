#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) *(arr+i)=0;
}
int badge(int *arr, int *siv, int length, int index) {
    initialize(siv,length);
    int curr=arr[index]-1;
    siv[index]=1;
    while (siv[curr]!=1) {
        siv[curr]=1;
        curr=arr[curr]-1;
    }
    return curr+1;
}
void solution(int *arr, int length) {
    int sieve[length];
    for (int i=0; i<length; i++) printf("%d ",badge(arr,sieve,length,i));
}
int main() {
    int len;
    scanf("%d\n",&len);
    int report[len];
    read(report,len);
    solution(report,len);
    return 0;
}

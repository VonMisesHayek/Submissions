#include <stdio.h>
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
int conflict(int *arr, int pos) {
    if (arr[pos]) {
        return 1;
    } else {
        arr[pos]=1;
        return 0;
    }
}
int fill(int *arr, int length, int lines) {
    long long curr;
    int i=1,keep=1;
    while (i<=lines && keep) {
        scanf("%I64d\n",&curr);
        if (conflict(arr,curr%length)) return i;
        i++;
    }
    return -1;
}
int main() {
    int len,p,flag=1;
    long long curr;
    scanf("%d %d\n",&p,&len);
    int sieve[p];
    initialize(sieve,p);
    printf("%d",fill(sieve,p,len));
    return 0;
}

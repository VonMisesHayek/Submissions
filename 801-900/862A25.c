#include <stdio.h>
#define size 101
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) *(arr+i)=0;
}
int operations(int *arr, int length, int mex) {
    int res=0;
    for (int i=0; i<mex; i++) {
        if (!arr[i]) res++;
    }
    if (arr[mex]) res++;
    return res;
}
int main() {
    int len,mex,curr;
    scanf("%d %d\n",&len,&mex);
    int sieve[size];
    initialize(sieve,size);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        sieve[curr]=1;
    }
    printf("%d",operations(sieve,size,mex));
    return 0;
}

#include <stdio.h>
int diagonal(char *arr, int *crib, int length) {
    int res=length;
    for (int i=1; i<length; i++) {
        if (arr[i-1]!=arr[i] && crib[i]==0 && crib[i-1]==0) {
            crib[i]=1;
            crib[i-1]=1;
            res--;
        }
    }
    return res;
}
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char walk[len];
    int sieve[len];
    initialize(sieve,len);
    for (int i=0; i<len; i++) scanf("%c",&walk[i]);
    printf("%d",diagonal(walk,sieve,len));
    return 0;
}

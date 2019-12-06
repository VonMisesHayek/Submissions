#include <stdio.h>
#define LENGTH 200001
#define ADD 100000
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
int explode(int *arr, int length) {
    int count=0;
    for (int i=0; i<ADD; i++) {
        if (arr[i]) count++;
        if (arr[LENGTH-i-1]) count++;
    }
    return count;
}
int main() {
    int len,curr;
    scanf("%d\n",&len);
    int sieve[LENGTH];
    initialize(sieve,LENGTH);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        sieve[ADD+curr]=1;
    }
    printf("%d",explode(sieve,LENGTH));
    return 0;
}

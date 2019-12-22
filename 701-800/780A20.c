#include <stdio.h>
void initialize(int *arr, long length) {
    for (long i=0; i<length; i++) *(arr+i)=0;
}
int main() {
    long pairs,curr,count=0,max=-1;
    scanf("%ld\n",&pairs);
    int sieve[pairs];
    long lim=2*pairs;
    initialize(sieve,pairs);
    for (long i=0; i<lim; i++) {
        scanf("%d",&curr);
        if (sieve[curr-1]==0) {
            count++;
            sieve[curr-1]=1;
            if (count>max) max=count;
        } else {
            count--;
            sieve[curr-1]=0;
        }
    }
    printf("%ld",max);
    return 0;
}

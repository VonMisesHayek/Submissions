#include <stdio.h>
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
int pass(int *arr, int length) {
    int pos=0,keep=1;
    while (pos<length && keep) {
        if (arr[pos]==0) keep=0;
        pos++;
    }
    return keep;
}
int main() {
    int levels,p,q,curr;
    scanf("%d\n%d",&levels,&p);
    int sieve[levels];
    initialize(sieve,levels);
    for (int i=0; i<p; i++) {
        scanf("%d",&curr);
        sieve[curr-1]=1;
    }
    scanf("%d",&q);
    for (int i=0; i<q; i++) {
        scanf("%d",&curr);
        sieve[curr-1]=1;
    }
    if (pass(sieve,levels)) {
        printf("I become the guy.");
    } else {
        printf("Oh, my keyboard!");
    }
    return 0;
}

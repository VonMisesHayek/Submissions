#include <stdio.h>
int equal(int *arr, int length) {
    int sum=0;
    for (int i=0; i<length; i++) sum+=arr[i];
    return sum/(length/2);
}
int assign(int *arr, int *crib, int ind, int goal) {
    int keep=1,pos=0;
    while (keep) {
        if ((arr[pos]+arr[ind])==goal && crib[pos]==0 && pos!=ind) {
            keep=0;
            crib[pos]=1;
            crib[ind]=1;
        }
        pos++;
    }
    return pos;
}
int main() {
    int cards;
    scanf("%d\n",&cards);
    int deck[cards];
    int sieve[cards];
    for (int i=0; i<cards; i++) {
        scanf("%d",&deck[i]);
        sieve[i]=0;
    }
    int goal=equal(deck,cards);
    for (int i=0; i<cards; i++) {
        if (sieve[i]==0) printf("%d %d\n",i+1,assign(deck,sieve,i,goal));
    }
    return 0;
}

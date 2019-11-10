#include <stdio.h>
int buy(int *arr, int *ar, int length, int len) {
    int count=0, i=0;
    while (i<length && count<len) {
        if (arr[i]<=ar[count]) {
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    int games,bills;
    scanf("%d %d\n",&games,&bills);
    int store[games],wallet[bills];
    for (int i=0; i<games; i++) scanf("%d",&store[i]);
    for (int i=0; i<bills; i++) scanf("%d",&wallet[i]);
    printf("%d",buy(store,wallet,games,bills));
    return 0;
}

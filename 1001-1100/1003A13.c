#include <stdio.h>
int main() {
    int coins;
    scanf("%d",&coins);
    int arr[coins];
    int max_coin=0;
    int max=0;
    for (int i=0; i<coins; i++) {
        int add;
        scanf("%d",&add);
        arr[i]=add;
        if (max_coin<add) max_coin=add;
    }
    int hist[max_coin];
    for (int i=0; i<max_coin; i++) hist[i]=0;
    for (int i=0; i<coins; i++) {
        hist[arr[i]-1]++;
    }
    for (int i=0; i<max_coin; i++) {
        if (hist[i]>max) max=hist[i];
    }
    printf("%d",max);
    return 0;
}

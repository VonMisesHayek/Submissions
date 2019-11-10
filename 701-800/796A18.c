#include <stdio.h>
#include <math.h>
int dist(int *arr, int length, int bag, int g) {
    int pos=0;
    int min=length;
    while (pos<length) {
        if (bag>=arr[pos] && abs(g-1-pos)<min && arr[pos]!=0) min=abs(g-1-pos);
        pos++;
    }
    return 10*min;
}
int main() {
    int len,girl,money;
    scanf("%d %d %d\n",&len,&girl,&money);
    int houses[len];
    for (int i=0; i<len; i++) scanf("%d",&houses[i]);
    printf("%d",dist(houses,len,money,girl));
    return 0;
}

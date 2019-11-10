#include <stdio.h>
int hours(int *arr, int length, int g) {
    int maxdiv=1;
    for (int i=0; i<length; i++) {
        if (g%arr[i]==0 && arr[i]>maxdiv) maxdiv=arr[i];
    }
    return g/maxdiv;
}
int main() {
    int buck,gard;
    scanf("%d %d\n",&buck,&gard);
    int water[buck];
    for (int i=0; i<buck; i++) scanf("%d",&water[i]);
    printf("%d",hours(water,buck,gard));
    return 0;
}

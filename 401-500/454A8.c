#include <stdio.h>
#include <math.h>
int main() {
    int size;
    scanf("%d",&size);
    int ref=(size-1)/2;
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            if (abs(j-ref)+abs(i-ref)>ref) {
                printf("*");
            } else {
                printf("D");
            }
        }
        printf("\n");
    }
    return 0;
}

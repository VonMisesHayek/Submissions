#include <stdio.h>
int main() {
    int size,curr,sum=0;
    scanf("%d",&size);
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            scanf("%d",&curr);
            if (i==j) {
                sum+=curr;
            } else if ((i+j+1)==size) {
                sum+=curr;
            } else if (i==((size-1)/2)) {
                sum+=curr;
            } else if (j==((size-1)/2)) {
                sum+=curr;
            }
        }
    }
    printf("%d",sum);
    return 0;
}

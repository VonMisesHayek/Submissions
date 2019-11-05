#include <stdio.h>
int main() {
    int size,sum=0,curr;
    scanf("%d\n",&size);
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            scanf("%d",&curr);
            if (i==j) {
                sum+=curr;
            } else if ((i+j+1)==size) {
                sum+=curr;
            } else if ((2*i+1)==size) {
                sum+=curr;
            } else if ((2*j+1)==size) {
                sum+=curr;
            }
        }
    }
    printf("%d",sum);
    return 0;
}

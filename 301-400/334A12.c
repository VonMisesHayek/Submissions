#include <stdio.h>
int square(int x, int y, int length) {
    return length*x+y+1;
}
int main() {
    int len,step;
    scanf("%d",&len);
    for (int j=0; j<len; j++) {
        step=j;
        for (int i=0; i<len; i++) {
            printf("%d ",square(i,step,len));
            step=len-step-1;
        }
        printf("\n");
    }
    return 0;
}

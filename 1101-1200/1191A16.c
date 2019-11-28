#include <stdio.h>
void cat(int n) {
    int aux=n%4;
    int mod[]={1,0,1,2};
    int sus=mod[aux];
    printf("%d ",sus);
    if ((n+sus)%4==1) {
        printf("A");
    } else if ((n+sus)%4==3) {
        printf("B");
    } else if ((n+sus)%4==2) {
        printf("C");
    } else {
        printf("D");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    cat(n);
    return 0;
}

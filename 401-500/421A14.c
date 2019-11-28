#include <stdio.h>
int main() {
    int ap,ar,al,curr;
    scanf("%d %d %d\n",&ap,&ar,&al);
    int reg[ap];
    for (int i=0; i<ap; i++) reg[i]=0;
    for (int i=0; i<ar; i++) {
        scanf("%d",&curr);
        reg[curr-1]=1;
    }
    for (int i=0; i<ap; i++) {
        if (reg[i]==1) {
            printf("1 ");
        } else {
            printf("2 ");
        }
    }
    return 0;
}

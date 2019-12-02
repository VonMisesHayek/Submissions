#include <stdio.h>
int main() {
    int mugs,cup,mug,max=0,acc=0;
    scanf("%d %d",&mugs,&cup);
    for (int i=0; i<mugs; i++) {
        scanf("%d",&mug);
        if (mug>max) max=mug;
        acc+=mug;
    }
    acc-=max;
    if (acc<=cup) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int lena,lenb,maxa=0,maxb=0,curr;
    scanf("%d\n",&lena);
    for (int i=0; i<lena; i++) {
        scanf("%d",&curr);
        if (curr>maxa) maxa=curr;
    }
    scanf("%d\n",&lenb);
    for (int i=0; i<lenb; i++) {
        scanf("%d",&curr);
        if (curr>maxb) maxb=curr;
    }
    printf("%d %d",maxa,maxb);
    return 0;
}

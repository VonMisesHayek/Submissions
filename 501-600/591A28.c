#include <stdio.h>
int main() {
    int l,p,q;
    scanf("%d\n%d\n%d",&l,&p,&q);
    float res=(l*p)/((double) p+q);
    printf("%.5f",res);
    return 0;
}

#include <stdio.h>
int main() {
    int price,rest,mod,q=1;
    scanf("%d %d",&price,&rest);
    mod=price%10;
    while ((q*mod-rest)%10!=0 && q*mod%10!=0) q++;
    printf("%d",q);
    return 0;
}

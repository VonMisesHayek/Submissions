#include <stdio.h>
int main() {
    long long pres;
    scanf("%I64d",&pres);
    long long aux=2*(pres/3);
    if (pres%3!=0) aux++;
    printf("%I64d",aux);
    return 0;
}

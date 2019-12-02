#include <stdio.h>
long long balance(long long acc) {
    if (acc>=0) {
        return acc;
    } else {
        long long aux1=acc/10;
        long long aux2=-((-acc-(-acc)%100)/10+(-acc)%10);
        if (aux1>aux2) {
            return aux1;
        } else {
            return aux2;
        }
    }
}
int main() {
    long long acc;
    scanf("%I64d",&acc);
    printf("%I64d",balance(acc));
    return 0;
}

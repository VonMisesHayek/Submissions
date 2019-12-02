#include <stdio.h>
long long rou(long long n) {
    if (n%10<=5) {
        return n-n%10;
    } else {
        return n+10-n%10;
    }
}
int main() {
    long long n;
    scanf("%I64d",&n);
    printf("%I64d",rou(n));
    return 0;
}

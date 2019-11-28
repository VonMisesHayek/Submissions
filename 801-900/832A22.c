#include <stdio.h>
int main() {
    long long n,k;
    scanf("%I64d %I64d",&n,&k);
    if ((n/k)%2) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

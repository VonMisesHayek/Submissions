#include <stdio.h>
int main() {
    int len;
    long long curr;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%lld",&curr);
        if (curr%2) {
            printf("%lld ",curr);
        } else {
            printf("%lld ",curr-1);
        }
    }
    return 0;
}

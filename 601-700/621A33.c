#include <stdio.h>
int main() {
    long long len,sum=0,curr,minodd=1000000000,odd=0;
    scanf("%I64d\n",&len);
    for (long long i=0; i<len; i++) {
        scanf("%I64d",&curr);
        sum+=curr;
        if (curr%2) {
            odd++;
            if (curr<minodd) minodd=curr;
        }
    }
    if (odd%2) {
        sum-=minodd;
    }
    printf("%I64d",sum);
    return 0;
}

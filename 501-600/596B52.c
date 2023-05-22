#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
int main() {
    ll len,curr,prev=0,moves=0;
    scanf("%I64d\n",&len);
    for (long i=0; i<len; i++) {
        scanf("%I64d",&curr);
        moves+=labs(curr-prev);
        prev=curr;
    }
    printf("%I64d",moves);
    return 0;
}

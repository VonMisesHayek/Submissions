#include <stdio.h>
int main() {
    long len,max=0,curlen=0;
    long long curr,prev=0;
    scanf("%ld\n",&len);
    for (long i=0; i<len; i++) {
        scanf("%I64d",&curr);
        if (prev>curr) {
            curlen=1;
        } else if (prev<=curr) {
            curlen++;
        }
        if (max<curlen) max=curlen;
        prev=curr;
    }
    printf("%ld",max);
    return 0;
}

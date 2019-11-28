#include <stdio.h>
int main() {
    long long len,delay,curr,prev=0,count=0;
    scanf("%I64d %I64d\n",&len,&delay);
    for (long long i=0; i<len; i++) {
        scanf("%I64d",&curr);
        if ((curr-prev)<=delay) {
            count++;
        } else {
            count=1;
        }
        prev=curr;
    }
    printf("%I64d",count);
    return 0;
}

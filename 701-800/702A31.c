#include <stdio.h>
int main() {
    int len,maxlen=1,countlen=1;
    long curr,prev=10000000000;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%ld",&curr);
        if (curr>prev) {
            countlen++;
            if (maxlen<countlen) maxlen=countlen;
        } else {
            countlen=1;
        }
        prev=curr;
    }
    printf("%d",maxlen);
    return 0;
}

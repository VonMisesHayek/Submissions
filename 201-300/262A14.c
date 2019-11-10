#include <stdio.h>
int less_lucky(long long num, int bound) {
    long long iter=num;
    int lucky=0;
    while (iter>0) {
        if (iter%10==4 || iter%10==7) lucky++;
        iter/=10;
    }
    return lucky<=bound;
}
int main() {
    int len,bound,count=0;
    long long curr;
    scanf("%d %d\n",&len,&bound);
    for (int i=0; i<len; i++) {
        scanf("%lld",&curr);
        count+=less_lucky(curr,bound);
    }
    printf("%d",count);
    return 0;
}

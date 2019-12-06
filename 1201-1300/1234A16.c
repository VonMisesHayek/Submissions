#include <stdio.h>
long long least(long long total_sum, int total_prod) {
    return total_sum/total_prod+(total_sum%total_prod!=0);
}
int main() {
    int queries,goods;
    long long curr,sum;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&goods);
        sum=0;
        for (int j=0; j<goods; j++) {
            scanf("%I64d",&curr);
            sum+=curr;
        }
        printf("%I64d\n",least(sum,goods));
    }
    return 0;
}

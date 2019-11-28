#include <stdio.h>
void choose(long long a, long long b, long long c, long long d) {
    if (a!=d) {
        printf("%I64d %I64d\n",a,d);
    } else {
        printf("%I64d %I64d\n",b,c);
    }
}
int main() {
    int queries;
    long long l1,r1,l2,r2;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d %I64d\n",&l1,&r1,&l2,&r2);
        choose(l1,r1,l2,r2);
    }
    return 0;
}

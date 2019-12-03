#include <stdio.h>
int mult(long long right) {
    return (right%2==0)-(right%2!=0);
}
long long sum(long long left, long long right) {
    if ((right-left)%2==1) {
        return -mult(left)*(right+1-left)/2;
    } else {
        return -mult(left)*(right-left)/2+mult(right)*right;
    }
}
int main() {
    int queries;
    long long l,r;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d\n",&l,&r);
        printf("%I64d\n",sum(l,r));
    }
    return 0;
}

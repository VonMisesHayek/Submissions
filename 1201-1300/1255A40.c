#include <stdio.h>
#include <stdlib.h>
long long press(long long *num) {
    long long res=0;
    res+=(*num)/5;
    (*num)=(*num)%5;
    res+=(*num)/2;
    (*num)=(*num)%2;
    res+=(*num);
    return res;
}
int main() {
    int queries;
    long long a,b,diff;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d\n",&a,&b);
        diff=llabs(a-b);
        printf("%I64d\n",press(&diff));
    }
    return 0;
}

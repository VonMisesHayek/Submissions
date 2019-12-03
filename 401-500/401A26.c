#include <stdio.h>
#include <math.h>
int frac_ceil(long long a, int b) {
    return (abs(a)+b*(a%b!=0))/b;
}
int main() {
    int len,max,curr;
    long long sum=0;
    scanf("%d %d\n",&len,&max);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        sum+=curr;
    }
    printf("%d",frac_ceil(sum,max));
    return 0;
}

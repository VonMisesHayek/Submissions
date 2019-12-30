#include <stdio.h>
int is_perfect(long long n) {
    long long a=n;
    int sum=0;
    while (a>0) {
        sum+=(a%10);
        a/=10;
    }
    return (sum==10);
}
int main() {
    int k,pos=0;
    long long i=18;
    scanf("%d",&k);
    while (pos<k) {
        i++;
        if (is_perfect(i)) pos++;
    }
    printf("%I64d",i);
    return 0;
}

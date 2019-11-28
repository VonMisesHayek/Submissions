#include <stdio.h>
void print(long long n) {
    if (n%3==0 || n%3==1) {
        printf("%d %d %I64d",1,1,n-2);
    } else {
        printf("%d %d %I64d",1,2,n-3);
    }
}
int main() {
    long long num;
    scanf("%I64d",&num);
    print(num);
    return 0;
}

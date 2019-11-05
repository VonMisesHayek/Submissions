#include <stdio.h>
int main() {
    long n,s;
    scanf("%ld %ld",&n,&s);
    if (s%n==0) {
        printf("%d",s/n);
    } else {
        printf("%d",s/n+1);
    }
    return 0;
}

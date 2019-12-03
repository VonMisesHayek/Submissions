#include <stdio.h>
int main() {
    int quer;
    long long n,x;
    scanf("%d\n",&quer);
    for (int i=0; i<quer; i++) {
        scanf("%I64d %I64d\n",&n,&x);
        printf("%I64d\n",2*x);
    }
    return 0;
}

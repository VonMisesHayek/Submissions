#include <stdio.h>
int rhombus(int n) {
    int res=1;
    while (n>0) {
        res+=4*(n-1);
        n--;
    }
    return res;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",rhombus(n));
    return 0;
}

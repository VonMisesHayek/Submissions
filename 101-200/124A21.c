#include <stdio.h>
int seats(int n, int a, int b) {
    if (n-a<=b) {
        return n-a;
    } else {
        return b+1;
    }
}
int main() {
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    printf("%d",seats(n,a,b));
    return 0;
}

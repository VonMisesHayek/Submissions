#include <stdio.h>
void find(int n) {
    if (n==1) {
        printf("-1");
    } else {
        printf("%d %d",n,n);
    }
}
int main() {
    int x;
    scanf("%d",&x);
    find(x);
    return 0;
}

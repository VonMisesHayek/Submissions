#include <stdio.h>
int domino(int x, int y) {
    return (x*y)/2;
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",domino(n,m));
    return 0;
}

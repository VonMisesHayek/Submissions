#include <stdio.h>
void mini(int n) {
    printf("%d\n",n);
    for (int i=0; i<n; i++) printf("1 ");
}
int main() {
    int n;
    scanf("%d",&n);
    mini(n);
    return 0;
}

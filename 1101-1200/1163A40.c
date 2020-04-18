#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if ((2*m)<=n) {
        if (m!=0) printf("%d",m);
        else printf("1");
    } else {
        printf("%d",n-m);
    }
    return 0;
}

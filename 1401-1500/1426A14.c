#include <stdio.h>
int petya(int n, int x) {
    if (n<=2) {
        return 1;
    } else {
        return (n-2)/x+2-((n-2)%x==0);
    }
}
int main() {
    int queries,n,x; scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d\n",&n,&x);
        printf("%d\n",petya(n,x));
    }
    return 0;
}

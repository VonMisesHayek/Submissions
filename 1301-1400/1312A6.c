#include <stdio.h>
int can_construct(int n, int m) {
    return n%m==0;
}
int main() {
    int queries,n,m;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d\n",&n,&m);
        (can_construct(n,m)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int queries;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        long l,r;
        scanf("%ld %ld\n",&l,&r);
        printf("%d %d\n",l,2*l);
    }
    return 0;
}

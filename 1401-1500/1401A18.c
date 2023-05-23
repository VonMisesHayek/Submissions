#include <stdio.h>
long step(long n, long k) {
    if (n>=k) {
        return ((n-k)%2!=0);
    } else {
        return k-n;
    }
}
int main() {
    int queries; scanf("%d\n",&queries);
    long n,k;
    for (int i=0; i<queries; i++) {
        scanf("%ld %ld\n",&n,&k);
        printf("%ld\n",step(n,k));
    }
    return 0;
}

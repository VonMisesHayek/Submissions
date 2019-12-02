#include <stdio.h>
long max(long a, long b) {
    return a*(a>=b)+b*(b>a);
}
long open(long e, long s, long t) {
    long inter=s+t-e;
    return max(s-inter,t-inter)+1;
}
int main() {
    int queries;
    long eggs,sti,toy;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%ld %ld %ld\n",&eggs,&sti,&toy);
        printf("%ld\n",open(eggs,sti,toy));
    }
    return 0;
}

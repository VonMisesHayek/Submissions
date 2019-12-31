#include <stdio.h>
long min(long a, long b) {
    return a*(a<=b)+b*(a>b);
}
int main() {
    int know;
    long max=0,curr;
    scanf("%d\n",&know);
    for (int i=0; i<know; i++) {
        scanf("%ld",&curr);
        if (curr>max) max=curr;
    }
    printf("%ld",max-min(max,25));
    return 0;
}

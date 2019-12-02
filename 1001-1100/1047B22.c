#include <stdio.h>
int main() {
    int n;
    long x,y,max=0;
    scanf("%d\n",&n);
    for (int i=0; i<n; i++) {
        scanf("%ld %ld\n",&x,&y);
        if (max<x+y) max=x+y;
    }
    printf("%ld",max);
    return 0;
}

#include <stdio.h>
#include <math.h>
void choose(long n) {
    int root=sqrt(n),max=0;
    for (int i=1; i<=root; i++) {
        if (n%i==0) max=i;
    }
    printf("%d %d",max,n/max);
}
int main() {
    long n;
    scanf("%ld",&n);
    choose(n);
    return 0;
}

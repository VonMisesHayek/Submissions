#include <stdio.h>
long gauss(long n) {
    return n*(n+1)/2;
}
long res(long n) {
    int acc=0,level=0;
    while (acc<n) {
        level++;
        acc+=gauss(level);
    }
    return level-(acc>n);
}
int main() {
    long cubes;
    scanf("%ld",&cubes);
    printf("%ld",res(cubes));
    return 0;
}

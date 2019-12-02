#include <stdio.h>
#include <math.h>
int solve(int x, int y) {
    int lim=floor(sqrt(x)),b,count=0;
    for (int a=0; a<=lim; a++) {
        b=x-a*a;
        if ((a+b*b)==y) count++;
    }
    return count;
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",solve(n,m));
    return 0;
}

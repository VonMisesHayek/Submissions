#include <stdio.h>
int main() {
    int base,curr,par=0;
    long deg;
    scanf("%d %ld\n",&base,&deg);
    for (long i=0; i<deg-1; i++) {
        scanf("%d",&curr);
        par+=((curr*base)%2);
    }
    scanf("%d",&curr);
    par+=(curr%2);
    if (par%2==0) {
        printf("even");
    } else {
        printf("odd");
    }
    return 0;
}

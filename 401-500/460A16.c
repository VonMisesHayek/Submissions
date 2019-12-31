#include <stdio.h>
int main() {
    int pairs,refill,keep=1;
    long days=1;
    scanf("%d %d",&pairs,&refill);
    while (keep) {
        pairs--;
        if (pairs==0 && days%refill!=0) keep=0;
        if (days%refill==0 && keep) pairs++;
        if (keep) days++;
    }
    printf("%ld",days);
    return 0;
}

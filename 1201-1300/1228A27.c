#include <stdio.h>
int distinct(long n) {
    long aux=n;
    int digs[10],add;
    for (int i=0; i<10; i++) digs[i]=0;
    while (aux>0) {
        add=aux%10;
        if (digs[add]==1) {
            return 0;
        } else {
            digs[add]++;
        }
        aux/=10;
    }
    return 1;
}
long can(long left, long right) {
    for (long i=left; i<=right; i++) {
        if (distinct(i)) return i;
    }
    return -1;
}
int main() {
    long l,r;
    scanf("%ld %ld",&l,&r);
    printf("%ld",can(l,r));
    return 0;
}

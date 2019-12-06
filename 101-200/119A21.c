#include <stdio.h>
int gcd(int x, int y) {
    if (x==0 || y==0) {
        return x+y;
    } else if (x>y) {
        return gcd(x-y,y);
    } else if (x<y) {
        return gcd(x,y-x);
    } else {
        return x;
    }
}
int win(int sim, int anti, int *heap) {
    int aux,par=1;
    while (*heap>=0) {
        if (par) {
            aux=gcd(*heap,sim);
            if (*heap-aux>=0) {
                *heap-=aux;
            } else {
                return 1;
            }
            par=0;
        } else {
            aux=gcd(*heap,anti);
            if (*heap-aux>=0) {
                *heap-=aux;
            } else {
                return 0;
            }
            par=1;
        }
    }
}
int main() {
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    printf("%d",win(a,b,&n));
    return 0;
}

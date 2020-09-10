#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
    scanf("\n");
}
int fast(int *arro, int *arrt, int leno, int lent) {
    int max=-1,aux,res=0;
    rep (i,0,leno) {
        rep (j,0,lent) {
            if (arrt[j]%arro[i]==0) {
                aux=arrt[j]/arro[i];
                if (aux>max) max=aux;
            }
        }
    }
    rep (i,0,leno) {
        rep (j,0,lent) {
            if (arrt[j]==(arro[i]*max)) res++;
        }
    }
    return res;
}
int main() {
    int n,m;
    scanf("%d\n",&n);
    int pedal[n]; scan(pedal,n);
    scanf("%d\n",&m);
    int rear[m]; scan(rear,m);
    printf("%d",fast(pedal,rear,n,m));
    return 0;
}

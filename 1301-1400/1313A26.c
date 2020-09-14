#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define swap(a,b) {int temp=(a); (a)=(b); (b)=temp;}
int poss[7][3]={{1,0,0},{0,1,0},{0,0,1},{1,1,0},{1,0,1},{0,1,1},{1,1,1}};
void reorder(int *a, int *b, int *c) {
    if ((*a)<(*b)) swap(*a,*b);
    if ((*a)<(*c)) swap(*a,*c);
    if ((*b)<(*c)) swap(*b,*c);
}
int portions(int a, int b, int c) {
    int res=0,port=0;
    reorder(&a,&b,&c);
    while (port<7 && a>=0 && b>=0 && c>=0) {
        if (poss[port][0]<=a && poss[port][1]<=b && poss[port][2]<=c) {
            a-=poss[port][0];
            b-=poss[port][1];
            c-=poss[port][2];
            res++;
        }
        port++;
    }
    return res;
}
int main() {
    int queries,a,b,c;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d\n",&a,&b,&c);
        printf("%d\n",portions(a,b,c));
    }
    return 0;
}

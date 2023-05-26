#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d ",(arr+i));
}
void print(int *arr, int length) {
    rep (i,0,length) printf("%d ",arr[i]);
    printf("\n");
}
void greed(int *arro, int leno, int *arrt, int lent, int k) {
    int len=leno+lent,pos=0,m=0,p=0,line=k;
    int real[len];
    while (pos<len) {
        if (m<leno && arro[m]<=line) {
            if (arro[m]==0) line++;
            real[pos]=arro[m];
            pos++; m++;
        } else if (p<lent && arrt[p]<=line) {
            if (arrt[p]==0) line++;
            real[pos]=arrt[p];
            pos++; p++;
        } else {
            printf("-1\n");
            return;
        }
    }
    rep (i,0,len) printf("%d ",real[i]);
    printf("\n");
    return;
}
int main() {
    int queries,k,n,m; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d\n",&k,&n,&m);
        int mono[n],poly[m]; scan(mono,n); scan(poly,m);
        greed(mono,n,poly,m,k);
    }
    return 0;
}

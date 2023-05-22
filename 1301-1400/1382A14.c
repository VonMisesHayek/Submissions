#include <stdio.h>
#define rep(i,a,b) for(int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void sub(int *arro, int *arrt, int leno, int lent) {
    rep (i,0,leno) {
        rep (j,0,lent) {
            if (arro[i]==arrt[j]) {
                printf("YES\n1 %d\n",arro[i]);
                return;
            }
        }
    }
    printf("NO\n");
}
int main() {
    int queries,n,m; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&n,&m);
        int first[n]; scan(first,n);
        int second[m]; scan(second,m);
        sub(first,second,n,m);
    }
    return 0;
}

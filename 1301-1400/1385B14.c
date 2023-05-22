#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void perm(int *arr, int length) {
    int pos=0,sieve[length],res[length]; rep (i,0,length) sieve[i]=0;
    rep (i,0,2*length) {
        sieve[arr[i]-1]++;
        if (sieve[arr[i]-1]==2) {
            res[pos]=arr[i];
            pos++;
        }
    }
    rep (i,0,length) printf("%d ",res[i]);
    printf("\n");
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int merg[2*len]; scan(merg,2*len);
        perm(merg,len);
    }
    return 0;
}

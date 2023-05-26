#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int cmp(const void *a, const void *b) {
    return (*(int*)a-*(int*)b);
}
int rcmp(const void *a, const void *b) {
    return (*(int*)b-*(int*)a);
}
int check(int *arro, int *arrt, int length, int x) {
    qsort(arro,length,sizeof(int),cmp);
    qsort(arrt,length,sizeof(int),rcmp);
    rep (i,0,length) {
        if (arro[i]+arrt[i]>x) return 0;
    }
    return 1;
}
int main() {
    int queries,len,x; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&len,&x);
        int a[len],b[len]; scan(a,len); scan(b,len);
        (check(a,b,len,x)) ? printf("Yes\n"):printf("No\n");
    }
    return 0;
}

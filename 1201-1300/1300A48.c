#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
    scanf("\n");
}
int step(int *arr, int length) {
    int res=0,sum=0;
    rep (i,0,length) {
        if (arr[i]==0) {
            res++;
            sum++;
        }
        sum+=arr[i];
    }
    return res+(sum==0);
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int non[len];
        scan(non,len);
        printf("%d\n",step(non,len));
    }
    return 0;
}

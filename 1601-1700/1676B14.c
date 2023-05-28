#include <stdio.h>
#include <limits.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int min(int x, int y) {
    return (x<y) ? x:y;
}
int arrmin(int *arr, int length) {
    int res=INT_MAX;
    rep (i,0,length) res=min(res,arr[i]);
    return res;
}
void read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int eat(int *arr, int length) {
    int m=arrmin(arr,length),res=0;
    rep(i,0,length) res+=(arr[i]-m);
    return res;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int candy[len]; read(candy,len);
        printf("%d\n",eat(candy,len));
    }
    return 0;
}

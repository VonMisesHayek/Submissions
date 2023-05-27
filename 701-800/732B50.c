#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void write(int *arr, int length) {
    rep (i,0,length) printf("%d ",*(arr+i));
}
void dp(int *arr, int length, int k, int *plus) {
    rep (i,0,length-1) {
        if (arr[i]+arr[i+1]<k) {
            (*plus)+=k-arr[i]-arr[i+1];
            arr[i+1]=k-arr[i];
        }
    }
}
int main() {
    int days,walk,add=0; scanf("%d %d\n",&days,&walk);
    int plan[days]; read(plan,days);
    dp(plan,days,walk,&add);
    printf("%d\n",add); write(plan,days);
}

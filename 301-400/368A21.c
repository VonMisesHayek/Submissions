#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int sort(int *arr, int length) {
    int temp;
    rep (i,0,length-1) {
        rep (j,i+1,length) {
            if (arr[i]>arr[j]) {
                temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
            }
        }
    }
}
int profit(int *arr, int length, int f, int m) {
    int res=0;
    sort(arr,length);
    if (m<=length) {
        rep (i,0,m) res+=arr[i];
    } else {
        rep (i,0,length) res+=arr[i];
        res-=(m-length)*f;
    }
    return res;
}
int main() {
    int len,fine,guest; scanf("%d %d\n",&len,&fine);
    int price[len]; scan(price,len); scanf("%d",&guest);
    printf("%d",profit(price,len,fine,guest));
    return 0;
}

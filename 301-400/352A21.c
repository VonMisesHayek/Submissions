#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void sort(int *arr, int length) {
    int temp;
    rep (i,0,length-1) {
        rep (j,i+1,length) {
            if (arr[i]<arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int can(int *arr, int length) {
    int sum=0;
    rep (i,0,length) {
        if (arr[i]!=5) return 1;
        sum+=arr[i];
    }
    return 0;
}
void maxnum(int *arr, int length) {
    sort(arr,length);
    int sum=0;
    rep (i,0,length) sum+=arr[i];
    rep (i,0,length) {
        if (sum==0) {
            printf("0");
            return;
        } else if (sum%9==0 && arr[length-1]==0) {
            rep (j,i,length) printf("%d",arr[j]);
            return;
        } else {
            sum-=arr[i];
        }
    }
}
int main() {
    int len; scanf("%d\n",&len);
    int num[len]; scan(num,len);
    (can(num,len)) ? maxnum(num,len):printf("-1");
    return 0;
}

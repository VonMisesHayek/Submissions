#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int local_extrema(int *arr, int length) {
    int res=0;
    rep (i,1,length-1) {
        if ((arr[i]-arr[i-1])*(arr[i]-arr[i+1])>0) res++;
    }
    return res;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int nums[len]; scan(nums,len);
    printf("%d",local_extrema(nums,len));
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
void read(ll *arr, int length) {
    rep (i,0,length) scanf("%I64d",(arr+i));
}
void recover(ll *arr, int length) {
    int left=0,right=length-1;
    if (length==1) printf("%I64d",arr[0]);
    while (left<right) {
        printf("%I64d ",arr[left]); left++;
        printf("%I64d ",arr[right]); right--;
    }
    if (left==right && length>1) printf("%I64d",arr[left]);
    printf("\n");
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        ll num[len]; read(num,len);
        recover(num,len);
    }
    return 0;
}

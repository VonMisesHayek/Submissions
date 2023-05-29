#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int bus(int *arr, int n, int m) {
    int res=0,curr=0,pos=0;
    while (pos<n) {
        if ((curr+arr[pos])<=m) {
            curr+=arr[pos];
        } else {
            curr=arr[pos];
            res++;
        }
        pos++;
    }
    return res+(curr!=0);
}
int main() {
    int len,cap; scanf("%d %d\n",&len,&cap);
    int group[len]; read(group,len);
    printf("%d",bus(group,len,cap));
    return 0;
}

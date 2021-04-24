#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void sort(int *arr, int length) {
    int temp;
    rep (i,0,length-1) {
        rep (j,i+1,length) {
            if (arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int maxmin(int *arr, int length) {
    scan(arr,length); sort(arr,length);
    int min=2001;
    rep (i,0,length-1) {
        if (min>arr[i+1]-arr[i]) min=arr[i+1]-arr[i];
    }
    return min;
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int ath[len];
        printf("%d\n",maxmin(ath,len));
    }
    return 0;
}

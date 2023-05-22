#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void bsort(int *arr, int length) {
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
int spell(int *arr, int length, int k) {
    int pos=length-1,res=0,m=arr[0];
    while (pos>0) {
        res+=(k-arr[pos])/m;
        pos--;
    }
    return res;
}
int main() {
    int queries,len,k; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&len,&k);
        int candle[len]; scan(candle,len); bsort(candle,len);
        printf("%d\n",spell(candle,len,k));
    }
    return 0;
}

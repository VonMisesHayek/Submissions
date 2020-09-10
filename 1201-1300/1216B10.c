#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void initialize(int *arr, int length) {
    rep (i,0,length) *(arr+i)=i+1;
}
void bsort(int *arro, int *arrt, int length) {
    int temp;
    rep (i,0,length-1) {
        rep (j,i+1,length) {
            if (arro[i]<arro[j]) {
                temp=arro[i]; arro[i]=arro[j]; arro[j]=temp;
                temp=arrt[i]; arrt[i]=arrt[j]; arrt[j]=temp;
            }
        }
    }
}
long calc(int *arr, int length) {
    long res=0;
    rep (i,0,length) {
        res+=arr[i]*i+1;
    }
    return res;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int cans[len],index[len];
    scan(cans,len);
    initialize(index,len);
    bsort(cans,index,len);
    printf("%ld\n",calc(cans,len));
    rep (i,0,len) printf("%d ",index[i]);
    return 0;
}

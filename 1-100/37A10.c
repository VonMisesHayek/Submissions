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
void tower(int *arr, int length, int *t, int *m) {
    scan(arr,length);
    sort(arr,length);
    *t=1; *m=0;
    int curlen=1;
    rep (i,1,length) {
        if (arr[i]==arr[i-1]) {
            curlen++;
        } else {
            if ((*m)<curlen) *m=curlen;
            (*t)++;
            curlen=1;
        }
    }
    if ((*m)<curlen) *m=curlen;
}
int main() {
    int len,tot,max; scanf("%d\n",&len);
    int bars[len];
    tower(bars,len,&tot,&max);
    printf("%d %d",max,tot);
    return 0;
}

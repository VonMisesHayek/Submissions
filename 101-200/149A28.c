#include <stdio.h>
#include <limits.h>
#define MONTH 12
#define rep(i,a,b) for (int i=a; i<b; i++)
void merge(int *arr, int p, int q, int r) {
    int l1=q-p+1,l2=r-q;
    int arro[l1+1],arrt[l2+1];
    rep (i,0,l1) arro[i]=arr[p+i];
    rep (i,0,l2) arrt[i]=arr[q+1+i];
    arro[l1]=-1; arrt[l2]=-1;
    int i=0,j=0;
    rep (k,p,r+1) {
        if (arro[i]>=arrt[j]) {
            arr[k]=arro[i];
            i++;
        } else {
            arr[k]=arrt[j];
            j++;
        }
    }
}
void sort(int *arr, int p, int r) {
    if (p<r) {
        int q=(p+r)/2;
        sort(arr,p,q);
        sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}
int days(int *arr, int length, int k) {
    if (k==0) return 0;
    int g=0;
    rep (i,0,length) {
        g+=arr[i];
        if (g>=k) return i+1;
    }
    if (g<k) return -1;
}
int main() {
    int grow;
    scanf("%d\n",&grow);
    int req[MONTH];
    rep (i,0,MONTH) scanf("%d",&req[i]);
    sort(req,0,MONTH-1);
    printf("%d",days(req,MONTH,grow));
    return 0;
}

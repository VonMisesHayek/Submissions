#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arro, int *arrt, int length) {
    rep (i,0,length) scanf("%d",(arro+i));
    scanf("\n");
    rep (i,0,length) scanf("%d",(arrt+i));
    scanf("\n");
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
int max_sum(int *arro, int *arrt, int length, int k) {
    int res=0,swaps=0,pos=0;
    sort(arro,length);
    sort(arrt,length);
    while (swaps<k && pos<length) {
        if (arrt[length-1-swaps]>arro[pos]) {
            res+=arrt[length-1-swaps];
            swaps++;
        } else {
            res+=arro[pos];
        }
        pos++;
    }
    while (pos<length) {
        res+=arro[pos];
        pos++;
    }
    return res;
}
int main() {
    int queries,len,k;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&len,&k);
        int a[len],b[len];
        scan(a,b,len);
        printf("%d\n",max_sum(a,b,len,k));
    }
    return 0;
}

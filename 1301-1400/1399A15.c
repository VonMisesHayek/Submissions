#include <stdio.h>
#include <stdlib.h>
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
int check(int *arr, int length) {
    int count=0;
    rep (i,0,length-1) {
        if (abs(arr[i+1]-arr[i])>1) count++;
    }
    return (count<1);
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int elems[len]; scan(elems,len);
        sort(elems,len);
        (check(elems,len)) ? printf("YES"):printf("NO");
        printf("\n");
    }
    return 0;
}

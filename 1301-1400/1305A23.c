#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
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
void print(int *arr, int length) {
    rep (i,0,length) printf("%d ",*(arr+i));
    printf("\n");
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int brac[len],neck[len];
        scan(brac,len); scan(neck,len);
        sort(brac,len); sort(neck,len);
        print(brac,len); print(neck,len);
    }
    return 0;
}

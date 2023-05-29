#include <stdio.h>
#include <limits.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void twomax(int *arr, int length, int *m, int *s, int *p1, int *p2) {
    (*m)=INT_MIN; (*s)=INT_MIN; (*p1)=0; (*p2)=0;
    rep (i,0,length) {
        if (arr[i]>(*m)) {
            (*s)=(*m);
            (*m)=arr[i];
            (*p2)=(*p1);
            (*p1)=i;
        } else if (arr[i]>(*s)) {
            (*s)=arr[i];
            (*p2)=i;
        }
    }
}
void diff(int *arr, int length) {
    int m,s,pm,ps;
    twomax(arr,length,&m,&s,&pm,&ps);
    rep (i,0,length) arr[i]-=m;
    arr[pm]=m-s;
}
void write(int *arr, int length) {
    rep (i,0,length) printf("%d ",arr[i]);
    printf("\n");
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int len; scanf("%d\n",&len);
        int nums[len]; read(nums,len);
        diff(nums,len);
        write(nums,len);
    }
    return 0;
}

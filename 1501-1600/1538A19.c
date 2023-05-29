#include <stdio.h>
#include <limits.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int sup(int x, int y) {
    return (x>y) ? x:y;
}
int inf(int x, int y) {
    return (x<y) ? x:y;
}
void pos_max_min(int *arr, int length, int *posmax, int *posmin) {
    int max=INT_MIN,min=INT_MAX;
    rep (i,0,length) {
        if (arr[i]>max) {
            max=arr[i];
            (*posmax)=i;
        }
        if (arr[i]<min) {
            min=arr[i];
            (*posmin)=i;
        }
    }
}
int moves(int *arr, int length) {
    int pmax,pmin;
    pos_max_min(arr,length,&pmax,&pmin);
    int m1=sup(pmax,pmin)+1;
    int m2=sup(length-pmax,length-pmin);
    int m3=pmax+length-pmin+1;
    int m4=pmin+length-pmax+1;
    return inf(inf(m1,m2),inf(m3,m4));
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int len; scanf("%d\n",&len);
        int stone[len]; read(stone,len);
        printf("%d\n",moves(stone,len));
    }
    return 0;
}

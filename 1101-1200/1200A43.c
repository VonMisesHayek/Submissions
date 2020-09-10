#include <stdio.h>
#define rooms 10
#define rep(i,a,b) for (int i=a; i<b; i++)
void initialize(int *arr, int length) {
    rep (i,0,length) *(arr+i)=0;
}
int moves(int *arr, int length, long all) {
    char curr;
    int pos;
    for (long i=0; i<all; i++) {
        scanf("%c",&curr);
        if (curr=='L') {
            pos=0;
            while (arr[pos]!=0) pos++;
            arr[pos]=1;
        } else if (curr=='R') {
            pos=9;
            while (arr[pos]!=0) pos--;
            arr[pos]=1;
        } else {
            arr[curr-'0']=0;
        }
    }
    rep (i,0,length) printf("%d",*(arr+i));
}
int main() {
    long len;
    scanf("%ld\n",&len);
    int hotel[rooms];
    initialize(hotel,rooms);
    moves(hotel,rooms,len);
    return 0;
}

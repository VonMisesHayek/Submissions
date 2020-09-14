#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int total(int a, int x) {
    return 2*(a+x+abs(a-x));
}
long att(int *arr, int length, int index) {
    long res=0;
    rep (i,0,length) res+=arr[i]*total(i,index);
    return res;
}
int minimize(int *arr, int length) {
    long min=100000000,aux;
    int pos=0;
    rep (i,0,length) {
        aux=att(arr,length,i);
        if (aux<min) {
            min=aux;
            pos=i;
        }
    }
    return min;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int floors[len]; scan(floors,len);
    printf("%d",minimize(floors,len));
    return 0;
}

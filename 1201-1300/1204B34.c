#include <stdio.h>
long long sum(long long *arr, int length) {
    long long res=0;
    for (int i=0; i<length; i++) res+=arr[i];
    return res;
}
void minfill(long long *arr, int length, int con) {
    long long val=1;
    int lim=length-con;
    for (int i=0; i<lim; i++) arr[i]=val;
    for (int i=lim; i<length; i++) {
        arr[i]=val;
        val*=2;
    }
}
void maxfill(long long *arr, int length, int con) {
    long long val=1;
    for (int i=0; i<con-1; i++) {
        arr[i]=val;
        val*=2;
    }
    for (int i=con-1; i<length; i++) arr[i]=val;
}
void print(long long *arr, int length) {
    for (int i=0; i<length; i++) printf("%I64d ",arr[i]);
    printf("\n");
}
int main() {
    int len,inf,sup;
    scanf("%d %d %d",&len,&inf,&sup);
    long long minlove[len],maxlove[len];
    minfill(minlove,len,inf);
    maxfill(maxlove,len,sup);
    printf("%I64d %I64d",sum(minlove,len),sum(maxlove,len));
    return 0;
}

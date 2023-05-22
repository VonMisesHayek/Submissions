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
int minimum(int *arr, int length) {
    int sum=0,res=0; rep (i,0,length) sum+=arr[i];
    while (10*sum<45*length && res<length) {
        sum+=(5-arr[res]);
        res++;
    }
    return res;
}
int main() {
    int len; scanf("%d\n",&len);
    int grade[len]; scan(grade,len);
    sort(grade,len);
    printf("%d",minimum(grade,len));
    return 0;
}

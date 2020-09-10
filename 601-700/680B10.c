#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int min(int x, int y) {
    return (x<=y) ? x:y;
}
int max(int x, int y) {
    return (x>=y) ? x:y;
}
int detector(int *arr, int length, int index) {
    int res=0;
    if (arr[index]==1) res++;
    rep (i,1,length) {
        if (index-i>=0 && index+i<length && arr[index-i] && arr[index+i]) {
            res+=2;
        } else if (index-i>=0 && arr[index-i] && index+i>=length) {
            res++;
        } else if (index-i<0 && index+i<length && arr[index+i]) {
            res++;
        }
    }
    return res;
}
int main() {
    int len,home;
    scanf("%d %d\n",&len,&home); home--;
    int city[len]; scan(city,len);
    printf("%d",detector(city,len,home));
    return 0;
}

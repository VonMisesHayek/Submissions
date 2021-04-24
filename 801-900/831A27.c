#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int is_unimodal(int *arr, int length) {
    int pos=0,constant=0;
    while (pos<length-1 && arr[pos]<arr[pos+1]) pos++;
    if (length==1 || pos<=length-1) constant=1;
    if (!constant) {
        return 0;
    } else {
        while (pos<length-1 && arr[pos]==arr[pos+1]) pos++;
        while (pos<length-1 && arr[pos]>arr[pos+1]) pos++;
        if (pos<length-1) return 0;
    }
    return 1;
}
int main() {
    int len; scanf("%d\n",&len);
    int uni[len];
    scan(uni,len);
    (is_unimodal(uni,len)) ? printf("YES"):printf("NO");
    return 0;
}

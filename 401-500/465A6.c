#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *arr, int length) {
    rep (i,0,length) scanf("%c",(arr+i));
}
int add_change(char *arr, int length) {
    char prev=arr[0]++;
    int res=1;
    rep (i,1,length) {
        if (arr[i-1]=='2') {
            res++;
            arr[i]++;
        }
        prev=arr[i];
    }
    return res;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char bits[len];
    scan(bits,len);
    printf("%d",add_change(bits,len));
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
int main() {
    long len;
    scanf("%ld",&len);
    rep (i,0,len/2) {
        if (i%2==0) {
            printf("aa");
        } else {
            printf("bb");
        }
    }
    if (len%4==1) {
        printf("a");
    } else if (len%4==3) {
        printf("b");
    }
    return 0;
}

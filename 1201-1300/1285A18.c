#include <stdio.h>
int main() {
    long len,l=0,r=0;
    char curr;
    scanf("%ld\n",&len);
    for (long i=0; i<len; i++) {
        scanf("%c",&curr);
        if (curr='L') {
            l++;
        } else {
            r++;
        }
    }
    printf("%ld",l+r+1);
    return 0;
}

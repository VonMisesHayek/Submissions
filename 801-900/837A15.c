#include <stdio.h>
int is_capital(char ch) {
    return ('A'<=ch && ch<='Z');
}
int main() {
    int len,vol=0,max=0;
    char curr;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%c",&curr);
        if (curr==' ') {
            vol=0;
        } else if (is_capital(curr)) {
            vol++;
        }
        if (max<vol) max=vol;
    }
    printf("%d",max);
    return 0;
}

#include <stdio.h>
int conv(char c) {
    return c-'0';
}
int main() {
    int len;
    int sum=0;
    scanf("%d\n",&len);
    char ch;
    for (int i=0; i<len; i++) {
        scanf("%c",&ch);
        if (conv(ch)%2==0) sum+=(i+1);
    }
    printf("%d",sum);
    return 0;
}

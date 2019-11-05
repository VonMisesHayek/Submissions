#include <stdio.h>
#include <string.h>
char to_upper(char c) {
    if (c>='a' && c<='z') {
        return c-'a'+'A';
    } else {
        return c;
    }
}
int main() {
    char s[1000];
    scanf("%s",s);
    int size=strlen(s);
    printf("%c",to_upper(s[0]));
    for (int i=1; i<size; i++) {
        printf("%c",s[i]);
    }
    return 0;
}

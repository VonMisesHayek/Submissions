#include <stdio.h>
int final(char *s, char *t) {
    int pos=0;
    while (*t) {
        if (*s==*t) {
            s++;
            pos++;
        }
        t++;
    }
    return pos+1;
}
int main() {
    char s[50],t[50];
    scanf("%s\n%s",s,t);
    printf("%d",final(s,t));
    return 0;
}

#include <stdio.h>
int is_upper(char c) {
    return (c>='A' && c<='Z');
}
int upp(char *s) {
    int up=0;
    int lo=0;
    while (*s) {
        if (is_upper(*s)) {
            up++;
        } else {
            lo++;
        }
        s++;
    }
    return (up>lo);
}
void mod(char* s) {
    if (upp(s)) {
        while (*s) {
            if (is_upper(*s)==0) *s=*s-'a'+'A';
            s++;
        }
    } else {
        while(*s) {
            if (is_upper(*s)) *s=*s-'A'+'a';
            s++;
        }
    }
}
int main() {
    char word[100];
    scanf("%s",word);
    mod(word);
    printf("%s",word);
    return 0;
}

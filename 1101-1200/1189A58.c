#include <stdio.h>
int good(char *s, int length) {
    int count=0;
    while (*s) {
        if (*s=='1') count++;
        s++;
    }
    return (2*count!=length);
}
void cut(char *s, int length) {
    if (good(s,length)) {
        printf("%d\n",1);
        printf("%s",s);
    } else {
        printf("%d\n",2);
        printf("%c ",s[0]);
        for (int i=1; i<length; i++) printf("%c",s[i]);
    }
}
int main() {
    int len;
    scanf("%d\n",&len);
    char word[len];
    scanf("%s",word);
    cut(word,len);
    return 0;
}

#include <stdio.h>
#include <string.h>
int greet(char *str, char *hi, int length, int l) {
    int pos=0;
    for (int i=0; i<length; i++) {
        if (str[i]==hi[pos]) pos++;
    }
    return (pos==l);
}
int main() {
    char word[101],check[]="hello";
    scanf("%s",word);
    int len=strlen(word),l=strlen(check);
    if (greet(word,check,len,l)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int fake(char *str, char *cont, int leno, int lent) {
    int pos=0,ind=0;
    while (pos<leno && ind<lent) {
        if (str[pos]==cont[ind]) ind++;
        pos++;
    }
    return (ind==lent);
}
int main() {
    char word[1001];
    char contain[]="heidi";
    scanf("%s",word);
    int len1=strlen(word),len2=strlen(contain);
    if (fake(word,contain,len1,len2)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

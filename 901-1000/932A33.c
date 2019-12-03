#include <stdio.h>
#include <string.h>
int main() {
    char word[1000];
    scanf("%s",word);
    int len=strlen(word);
    printf("%s",word);
    for (int i=1; i<len; i++) printf("%c",word[len-1-i]);
    return 0;
}

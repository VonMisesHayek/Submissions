#include <stdio.h>
#include <string.h>
int next(int n) {
    if (n>0) {
        return -n-1;
    } else {
        return -n+1;
    }
}
void decode(char *s, int length) {
    char res[length+1];
    int jump=0,start,type=(length%2),fill=0;
    if (type==0) {
        start=length/2-1;
    } else {
        start=length/2;
    }
    while (fill<length) {
        res[fill]=s[start];
        jump=next(jump);
        start+=jump;
        fill++;
    }
    res[length]='\0';
    printf("%s",res);
}
int main() {
    char word[50];
    scanf("%s",word);
    int len=strlen(word);
    decode(word,len);
    return 0;
}

#include <stdio.h>
#include <string.h>
void borze(char *word, int length) {
    int pos=0;
    while (pos<length) {
        if (word[pos]=='.') {
            printf("0");
            pos++;
        } else if (word[pos]=='-' && word[pos+1]=='.') {
            printf("1");
            pos+=2;
        } else if (word[pos]=='-' && word[pos+1]=='-') {
            printf("2");
            pos+=2;
        }
    }
}
int main() {
    char mess[200];
    scanf("%s",mess);
    int len=strlen(mess);
    borze(mess,len);
    return 0;
}

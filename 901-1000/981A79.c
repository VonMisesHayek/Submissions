#include <stdio.h>
#include <string.h>
int oneletter(char *str) {
    char comp=str[0];
    while (*str) {
        if (*str!=comp) return 0;
        str++;
    }
    return 1;
}
int is_palindrome(char *str, int start, int end) {
    int lim=(end-start)/2+1;
    for (int i=0; i<lim; i++) {
        if (str[start+i]!=str[end-i]) return 0;
    }
    return 1;
}
int anti(char *str, int length) {
    int res=0,curlen=length,iter;
    while (curlen>0) {
        iter=length-curlen+1;
        for (int i=0; i<iter; i++) {
            if (is_palindrome(str,i,i+curlen-1)==0) return curlen;
        }
        curlen--;
    }
}
int main() {
    char word[51];
    scanf("%s",word);
    int len=strlen(word);
    if (oneletter(word)) {
        printf("0");
    } else {
        printf("%d",anti(word,len));
    }
    return 0;
}

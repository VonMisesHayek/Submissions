#include <stdio.h>
int evod(int n) {
    if(n%2==0) {
        return 1;
    } else {
        return -1;
    }
}
void decode(char *s, int length) {
    char res[length];
    int start=(length-1)/2,cap;
    if (length%2) {
        cap=1;
    } else {
        cap=-1;
    }
    for (int i=0; i<length; i++) {
        start+=cap*evod(i)*i;
        res[start]=s[i];
    }
    for (int i=0; i<length; i++) printf("%c",res[i]);
}
int main() {
    int len;
    scanf("%d",&len);
    char word[len];
    scanf("%s",word);
    decode(word,len);
    return 0;
}

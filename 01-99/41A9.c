#include <stdio.h>
#include <string.h>
int translate(char* s, char* t) {
    int res=1;
    if (strlen(s)!=strlen(t)) {
        return 0;
    } else {
        int len=strlen(s);
        for (int i=0; i<len; i++) {
            if (s[i]!=t[len-1-i]) res=0;
        }
        return res;
    }
}
int main() {
    char* word1=(char*) malloc(100*sizeof(char));
    char* word2=(char*) malloc(100*sizeof(char));
    scanf("%s\n%s",word1,word2);
    if (translate(word1,word2)) {
        printf("%s",(char*)"YES");
    } else {
        printf("%s",(char*)"NO");
    }
    return 0;
}

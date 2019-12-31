#include <stdio.h>
#include <string.h>
int is_lang(char *str, char *suffix, int length, int slen) {
    if (length<slen) return 0;
    for (int i=0; i<slen; i++) {
        if (str[length-slen+i]!=suffix[i]) return 0;
    }
    return 1;
}
int main() {
    int queries,len;
    char sentence[1001];
    char fili[]="po",jap1[]="desu",jap2[]="masu",kor[]="mnida";
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%s",sentence);
        len=strlen(sentence);
        if (is_lang(sentence,fili,len,strlen(fili))) {
            printf("FILIPINO\n");
        } else if (is_lang(sentence,kor,len,strlen(kor))) {
            printf("KOREAN\n");
        } else {
            printf("JAPANESE\n");
        }
    }
    return 0;
}

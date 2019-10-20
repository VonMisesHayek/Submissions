#include <stdio.h>
#include <string.h>
char to_lower(char c) {
    if (c>='A' && c<='Z') {
        return c-'A'+'a';
    } else {
        return c;
    }
}
int is_vowel(char c) {
    char check=to_lower(c);
    return (check=='a' || check=='e' || check=='i' || check=='o' || check=='u' || check=='y');
}
int main() {
    char* str=(char*) malloc(100*sizeof(char));
    scanf("%s",str);
    int len=strlen(str);
    for (int i=0; i<len; i++) {
        if (is_vowel(str[i])==0) printf(".%c",to_lower(str[i]));
    }
    return 0;
}

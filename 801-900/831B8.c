#include <stdio.h>
int conv(char c) {
    return c-'a';
}
int isupp(char c) {
    return (c>='A' && c<='Z');
}
char toupp(char c) {
    return c-'a'+'A';
}
char tolow(char c) {
    return c-'A'+'a';
}
int isnum(char c) {
    return (c>='0' && c<='9');
}
void dec(char *ini, char *fin, char *arr) {
    for (int i=0; i<26; i++) {
        arr[conv(ini[i])]=fin[i];
    }
}
void decode(char *arr, char *tab) {
    while (*arr) {
        if (isnum(*arr)) {
            printf("%c",*arr);
        } else {
            if (isupp(*arr)) {
                int temp=conv(tolow(*arr));
                printf("%c",toupp(tab[temp]));
            } else {
                printf("%c",tab[conv(*arr)]);
            }
        }
        arr++;
    }
}
int main() {
    char lay[26];
    char out[26];
    char end[26];
    char mess[1000];
    scanf("%s\n%s\n%s",lay,out,mess);
    dec(lay,out,end);
    decode(mess,end);
    return 0;
}

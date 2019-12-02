#include <stdio.h>
void reverse(char *s, int sub) {
    char aux[sub];
    for (int i=0; i<sub; i++) aux[i]=s[sub-i-1];
    for (int i=0; i<sub; i++) s[i]=aux[i];
}
void decode(char *s, int length) {
    int roll=1;
    while (roll<=length) {
        if (length%roll==0) reverse(s,roll);
        roll++;
    }
    printf("%s",s);
}
int main() {
    int len;
    scanf("%d\n",&len);
    char string[len];
    scanf("%s",string);
    decode(string,len);
    return 0;
}

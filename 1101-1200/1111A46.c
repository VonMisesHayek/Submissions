#include <stdio.h>
#include <string.h>
int is_vowel(char c) {
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
int transform(char *stro, char *strt) {
    int leno=strlen(stro),lent=strlen(strt);
    if (leno!=lent) return 0;
    for (int i=0; i<leno; i++) {
        if (is_vowel(stro[i])!=is_vowel(strt[i])) return 0;
    }
    return 1;
}
int main() {
    char f[1001],s[1001]; scanf("%s\n%s",f,s);
    (transform(f,s)) ? printf("Yes"):printf("No");
    return 0;
}

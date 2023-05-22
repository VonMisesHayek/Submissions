#include <stdio.h>
int rest[]={5,7,5};
int syllable(char *s) {
    int res=0;
    while (*s) {
        if (*s=='a' || *s=='e' || *s=='i' || *s=='o' || *s=='u') res++;
        s++;
    }
    return res;
}
int is_haiku(char *s) {
    for (int i=0; i<3; i++) {
        scanf("%[^\n]\n",s);
        if (syllable(s)!=rest[i]) return 0;
    }
    return 1;
}
int main() {
    char line[101];
    (is_haiku(line)) ? printf("YES"):printf("NO");
    return 0;
}

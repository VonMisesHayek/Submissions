#include <stdio.h>
#include <string.h>
char comp[]="codeforces";
int is_in(char *str, char c) {
    int len=strlen(str),pos=0;
    while (pos<len) {
        if (str[pos]==c) return 1;
        pos++;
    }
    return 0;
}
int main() {
    int queries; scanf("%d\n",&queries);
    char c;
    for (int i=0; i<queries; i++) {
        scanf("%c\n",&c);
        (is_in(comp,c)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

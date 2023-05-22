#include <stdio.h>
#include <string.h>
void guess(char *s) {
    int len=strlen(s);
    printf("%c",s[0]);
    if (len==2) {
        printf("%c\n",s[1]);
        return;
    }
    for (int i=2; i<len-1; i+=2) printf("%c",s[i]);
    printf("%c\n",s[len-1]);
}
int main() {
    int queries; scanf("%d\n",&queries);
    char curr[101];
    for (int i=0; i<queries; i++) {
        scanf("%s\n",curr);
        guess(curr);
    }
    return 0;
}

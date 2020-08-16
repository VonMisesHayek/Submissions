#include <stdio.h>
#include <string.h>
int equal_swap(char *a, char *b, char *c) {
    int len=strlen(c);
    for (int i=0; i<len; i++) {
        if (a[i]!=c[i] && b[i]!=c[i]) return 0;
    }
    return 1;
}
int main() {
    int queries;
    char a[101],b[101],c[101];
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%s\n%s\n%s\n",a,b,c);
        if (equal_swap(a,b,c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

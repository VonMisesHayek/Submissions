#include <stdio.h>
void tr(char *s, int *b, int length) {
    for (int i=0; i<length; i++) b[i]=s[i]-'0';
}
void puzzle(int *b, int length) {
    int a[length]; a[0]=1;
    for (int i=1; i<length; i++) {
        if (b[i-1]==b[i]) {
            a[i]=1-a[i-1];
        } else if (b[i-1]==1 && b[i]==0 && a[i-1]==0) {
            a[i]=0;
        } else {
            a[i]=1;
        }
    }
    for (int i=0; i<length; i++) printf("%d",a[i]);
    printf("\n");
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&len);
        char s[len]; scanf("%s\n",s);
        int b[len]; tr(s,b,len);
        puzzle(b,len);
    }
    return 0;
}

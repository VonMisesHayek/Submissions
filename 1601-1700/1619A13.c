#include <stdio.h>
#include <string.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MAX 101
int is_square(char *s) {
    int len=strlen(s);
    if (len%2!=0) {
        return 0;
    } else {
        rep (i,0,len/2) {
            if (s[i]!=s[i+len/2]) return 0;
        }
        return 1;
    }
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        char str[MAX]; scanf("%s",str);
        (is_square(str)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int is_yes(char *str) {
    return ((str[0]=='Y' || str[0]=='y') && (str[1]=='E' || str[1]=='e') && (str[2]=='S' || str[2]=='s'));
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        char s[4]; scanf("%s",s);
        (is_yes(s)) ? printf("YES"):printf("NO"); printf("\n");
    }
    return 0;
}

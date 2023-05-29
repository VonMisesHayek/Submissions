#include <stdio.h>
#include <string.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define SIZE 51
int value(char *str) {
    int res=0;
    while (str[res]=='X') res++;
    switch (str[res]) {
        case 'M':
            res=0;
            break;
        case 'S':
            res*=-1;
            res--;
            break;
        case 'L':
            res++;
            break;
    }
    return res;
}
void compare(char *a, char *b) {
    int vala=value(a),valb=value(b);
    if (vala<valb) {
        printf("<\n");
    } else if (vala==valb) {
        printf("=\n");
    } else {
        printf(">\n");
    }
}
int main() {
    int queries; scanf("%d\n",&queries);
    char a[SIZE],b[SIZE];
    rep (i,0,queries) {
        scanf("%s %s\n",a,b);
        compare(a,b);
    }
    return 0;
}

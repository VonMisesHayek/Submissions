#include <stdio.h>
#include <string.h>
#define MAXSIZE 6
#define rep(i,a,b) for (int i=a; i<b; i++)
void round_decomposition(char *num) {
    int len=strlen(num),comp=0;
    rep (i,0,len) {
        if (num[i]!='0') comp++;
    }
    printf("%d\n",comp);
    rep (i,0,len) {
        if (num[i]!='0') {
            printf("%c",num[i]);
            rep (j,0,len-i-1) printf("0");
            printf(" ");
        }
    }
    printf("\n");
}
int main() {
    int queries;
    char number[MAXSIZE];
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%s\n",&number);
        round_decomposition(number);
    }
    return 0;
}

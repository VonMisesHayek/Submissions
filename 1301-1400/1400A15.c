#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *str, int length) {
    rep (i,0,length) scanf("%c",(str+i));
    scanf("\n");
}
void print_similar(char *str, int half) {
    char c=str[half-1];
    rep (i,0,half) printf("%c",c);
    printf("\n");
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        char sim[2*len-1]; scan(sim,2*len-1);
        print_similar(sim,len);
    }
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void choose(int a, int b, int c) {
    int f=a-1;
    int s=b-1+(b<c)*2*(c-b);
    if (f<s) {
        printf("1");
    } else if (f>s) {
        printf("2");
    } else {
        printf("3");
    } printf("\n");
}
int main() {
    int queries,a,b,c; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d\n",&a,&b,&c);
        choose(a,b,c);
    }
    return 0;
}

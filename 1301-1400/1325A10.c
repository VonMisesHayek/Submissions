#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int main() {
    int queries;
    long curr;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%ld\n",&curr);
        printf("1 %ld\n",curr-1);
    }
    return 0;
}

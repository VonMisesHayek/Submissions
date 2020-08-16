#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void can() {
    int length,curr,odd=0;
    scanf("%d\n",&length);
    rep (i,0,length) {
        scanf("%d\n",&curr);
        odd+=(curr%2);
    } scanf("\n");
    if (odd%2) {
        printf("YES\n");
    } else if (odd%2==0 && odd!=length && odd!=0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main() {
    int queries;
    scanf("%d\n",&queries);
    rep (i,0,queries) can();
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int division(int rating) {
    return (rating<1400)+(rating<1600)+(rating<1900)+1;
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int rating; scanf("%d\n",&rating);
        printf("Division %d\n",division(rating));
    }
    return 0;
}

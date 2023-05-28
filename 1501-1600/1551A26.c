#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void print_pay(int n) {
    int c1=n/3,c2=c1;
    if (n%3==1) {
        c1++;
    } else if (n%3==2) {
        c2++;
    }
    printf("%d %d\n",c1,c2);
}
int main() {
    int queries,burles; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&burles);
        print_pay(burles);
    }
    return 0;
}

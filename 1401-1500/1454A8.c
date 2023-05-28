#include <stdio.h>
#define rep(i,a,b)for (int i=a; i<b; i++)
void print_perm(int length) {
    printf("%d ",length);
    rep (i,1,length) printf("%d ",i);
    printf("\n");
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int len; scanf("%d\n",&len);
        print_perm(len);
    }
    return 0;
}

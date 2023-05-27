#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int can_arrange(int n, int k) {
    return (n+1-2*k>=0);
}
void println(int length) {
    rep (i,0,length) printf(".");
    printf("\n");
}
void place_rook(int index, int length) {
    rep (i,0,index) printf(".");
    printf("R");
    rep(i,index+1,length) printf(".");
    printf("\n");
}
void generate_table(int n, int k) {
    rep (i,0,k-1) {
        place_rook(2*i,n);
        println(n);
    }
    place_rook(2*(k-1),n);
    rep (i,2*k-1,n) println(n);
}
int main() {
    int queries,n,k; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&n,&k);
        (can_arrange(n,k)) ? generate_table(n,k) : printf("-1\n");
    }
    return 0;
}

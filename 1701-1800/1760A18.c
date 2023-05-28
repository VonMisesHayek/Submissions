#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int max(int x, int y) {
    return (x>y) ? x:y;
}
int min(int x, int y) {
    return (x<y) ? x:y;
}
int medium(int x, int y, int z) {
    return x+y+z-max(x,max(y,z))-min(x,min(y,z));
}
int main() {
    int queries,a,b,c; scanf("%d",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d\n",&a,&b,&c);
        printf("%d\n",medium(a,b,c));
    }
    return 0;
}

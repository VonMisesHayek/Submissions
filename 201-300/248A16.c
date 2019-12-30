#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int main() {
    int len,l,r,lopen=0,lclose=0,ropen=0,rclose=0,tot=0;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%d %d\n",&l,&r);
        lopen+=(l==1);
        lclose+=(l==0);
        ropen+=(r==1);
        rclose+=(r==0);
    }
    if (2*lopen>=len) {
        tot+=lclose;
    } else {
        tot+=lopen;
    }
    if (2*ropen>=len) {
        tot+=rclose;
    } else {
        tot+=ropen;
    }
    printf("%d",tot);
    return 0;
}

#include <stdio.h>
int max(int x, int y) {
    return (x>y) ? x:y;
}
int min(int x, int y) {
    return (x<y) ? x:y;
}
int team(int l, int r, int a) {
    int x=max(l,r),y=min(l,r);
    if (a>=(x-y)) {
        int z=(a-x+y)/2;
        return 2*(x+z);
    } else {
        return 2*(y+a);
    }
}
int main() {
    int l,r,a;
    scanf("%d %d %d",&l,&r,&a);
    printf("%d",team(l,r,a));
    return 0;
}

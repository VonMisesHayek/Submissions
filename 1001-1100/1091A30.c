#include <stdio.h>
int ornaments(int a, int b, int c) {
    int x=3*c-3,y=3*b,z=3*a+3;
    if (x<=y && x<=z) {
        return x;
    } else if (y<=x && y<=z) {
        return y;
    } else {
        return z;
    }
}
int main() {
    int y,b,r;
    scanf("%d %d %d",&y,&b,&r);
    printf("%d",ornaments(y,b,r));
    return 0;
}

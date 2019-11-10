#include <stdio.h>
int min(int x, int y, int z) {
    if (x<=y && x<=z) {
        return x;
    } else if (y<=x && y<=z) {
        return y;
    } else {
        return z;
    }
}
int comp(int x, int y, int z) {
    int minimum=min(4*x,2*y,z);
    if (4*x==minimum) {
        return 7*x;
    } else if (2*y==minimum) {
        return 7*(y/2);
    } else {
        return 7*(z/4);
    }
}
int main() {
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("%d",comp(a,b,c));
    return 0;
}

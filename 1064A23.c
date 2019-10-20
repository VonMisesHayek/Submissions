#include <stdio.h>
int max(int a, int b, int c) {
    if (a>=b && a>=c) {
        return a;
    } else if (b>=a && b>=c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int maximum=max(x,y,z);
    if ((2*maximum)>=x+y+z) {
        printf("%d",2*maximum-x-y-z+1);
    } else {
        printf("%d",0);
    }
    return 0;
}

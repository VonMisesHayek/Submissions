#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (z<(x-y)) {
        printf("+");
    } else if (z<(y-x)) {
        printf("-");
    } else if (x==y && z==0) {
        printf("0");
    } else {
        printf("?");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int chips,ev=0;
    long coor;
    scanf("%d\n",&chips);
    for (int i=0; i<chips; i++) {
        scanf("%ld",&coor);
        if (coor%2==0) ev++;
    }
    if (2*ev>=chips) {
        printf("%d",chips-ev);
    } else {
        printf("%d",ev);
    }
    return 0;
}

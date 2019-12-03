#include <stdio.h>
int max(int x, int y) {
    return x*(x>=y)+y*(y>x);
}
int main() {
    int roll1,roll2,m;
    scanf("%d %d",&roll1,&roll2);
    m=max(roll1,roll2);
    switch (m) {
        case 1:
            printf("1/1");
            break;
        case 2:
            printf("5/6");
            break;
        case 3:
            printf("2/3");
            break;
        case 4:
            printf("1/2");
            break;
        case 5:
            printf("1/3");
            break;
        case 6:
            printf("1/6");
            break;
    }
    return 0;
}

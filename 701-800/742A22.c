#include <stdio.h>
int main() {
    long expo;
    scanf("%ld",&expo);
    if (expo==0) {
        printf("1");
    } else {
        switch (expo%4) {
            case 0:
                printf("6");
                break;
            case 1:
                printf("8");
                break;
            case 2:
                printf("4");
                break;
            case 3:
                printf("2");
                break;
        }
    }
    return 0;
}

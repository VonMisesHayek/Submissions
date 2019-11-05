#include <stdio.h>
int main() {
    int people;
    int hard=0;
    scanf("%d",&people);
    for (int i=0; i<people; i++) {
        int curr;
        scanf("%d",&curr);
        if (curr) hard=1;
    }
    if (hard) {
        printf("%s",(char*)"HARD");
    } else {
        printf("%s",(char*)"EASY");
    }
    return 0;
}

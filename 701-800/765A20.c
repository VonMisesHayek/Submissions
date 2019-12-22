#include <stdio.h>
int main() {
    int flights;
    scanf("%d\n",&flights);
    if (flights%2==0) {
        printf("home");
    } else {
        printf("contest");
    }
    return 0;
}

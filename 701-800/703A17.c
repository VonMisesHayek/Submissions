#include <stdio.h>
int main() {
    int games;
    int mishka=0;
    int chris=0;
    scanf("%d",&games);
    for (int i=0; i<games; i++) {
        int m,c;
        scanf("%d %d",&m,&c);
        if (m>c) {
            mishka++;
        } else if (m<c) {
            chris++;
        }
    }
    if (mishka>chris) {
        printf("%s",(char*)"Mishka");
    } else if (mishka<chris) {
        printf("%s",(char*)"Chris");
    } else {
        printf("%s",(char*)"Friendship is magic!^^");
    }
    return 0;
}

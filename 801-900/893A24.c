#include <stdio.h>
void game(int *player1, int *player2, int *spectator, int *val) {
    int curr,temp;
    scanf("%d\n",&curr);
    if (curr==*spectator) {
        *val=0;
    } else if (curr==*player1) {
        temp=*player2;
        *player2=*spectator;
        *spectator=temp;
    } else {
        temp=*player1;
        *player1=*spectator;
        *spectator=temp;
    }
}
int main() {
    int len,plo=1,plt=2,spe=3,valid=1,i=0;
    scanf("%d\n",&len);
    while (i<len && valid) {
        game(&plo,&plt,&spe,&valid);
        i++;
    }
    if (valid) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

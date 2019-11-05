#include <stdio.h>
int win(char* arr, int length) {
    int lose=1;
    int j=0;
    while (j<length && lose) {
        if (arr[j]=='0') lose=0;
        j++;
    }
    return 1-lose;
}
int main() {
    int opp,days;
    int row=0;
    int max=0;
    scanf("%d %d\n",&opp,&days);
    char batt[opp];
    for (int i=0; i<days; i++) {
        scanf("%s",batt);
        if (win(batt,opp)) {
            row++;
            if (row>max) max=row;
        } else {
            row=0;
        }
    }
    printf("%d",max);
    return 0;
}

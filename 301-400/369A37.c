#include <stdio.h>
int main() {
    int days,bowl,plate,wash=0,curr;
    scanf("%d %d %d\n",&days,&bowl,&plate);
    for (int i=0; i<days; i++) {
        scanf("%d",&curr);
        if (curr==1) {
            if (bowl==0) {
                wash++;
            } else {
                bowl--;
            }
        } else {
            if (plate==0 && bowl==0) {
                wash++;
            } else if (plate>0) {
                plate--;
            } else {
                bowl--;
            }
        }
    }
    printf("%d",wash);
    return 0;
}

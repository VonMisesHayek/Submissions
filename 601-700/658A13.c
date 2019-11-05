#include <stdio.h>
int max(int score, int min, int dec) {
    int res=score-min*dec;
    if (res>0) {
        return res;
    } else {
        return 0;
    }
}
int main() {
    int len,c;
    int limak=0,radewoosh=0,accl=0,accr=0; 
    scanf("%d %d",&len,&c);
    int prob[len];
    int times[len];
    for (int i=0; i<len; i++) scanf("%d",&prob[i]);
    for (int i=0; i<len; i++) scanf("%d",&times[i]);
    for (int i=0; i<len; i++) {
        accl+=times[i];
        limak+=max(prob[i],accl,c);
    }
    for (int i=0; i<len; i++) {
        accr+=times[len-1-i];
        radewoosh+=max(prob[len-1-i],accr,c);
    }
    if (radewoosh>limak) {
        printf("Radewoosh");
    } else if (radewoosh==limak) {
        printf("Tie");
    } else {
        printf("Limak");
    }
    return 0;
}

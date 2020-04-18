#include <stdio.h>
void cant(long vl, long va) {
    long turn=1;
    int keep=1;
    while (keep) {
        if (turn%2==1) {
            if (vl>=turn) {
                vl-=turn;
            } else {
                keep=0;
            }
        } else {
            if (va>=turn) {
                va-=turn;
            } else {
                keep=0;
            }
        }
        turn++;
    }
    if (turn%2==1) {
        printf("Valera");
    } else {
        printf("Vladik");
    }
}
int main() {
    long vladik,valera;
    scanf("%ld %ld",&vladik,&valera);
    cant(vladik,valera);
    return 0;
}

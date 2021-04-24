#include <stdio.h>
#define DIGITS 9
#define SIZE 4
#define rep(i,n) for (int i=0; i<n; i++)
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,length) {
        rep (j,width) scanf("%c",((biarr+step)+j));
        scanf("\n");
        step+=width;
    }
}
void initialize(int *arr, int length) {
    rep (i,length) *(arr+i)=0;
}
int can(char *biarr, int length, int width, int k) {
    int hist[DIGITS],step=0; initialize(hist,DIGITS);
    char temp;
    rep (i,length) {
        rep (j,width) {
            temp=*((biarr+step)+j);
            if (temp!='.') hist[temp-'1']++;
        }
        step+=width;
    }
    rep (i,DIGITS) {
        if (hist[i]>2*k) return 0;
    }
    return 1;
}
int main() {
    int hand; scanf("%d\n",&hand);
    char press[SIZE][SIZE];
    scan(press,SIZE,SIZE);
    (can(press,SIZE,SIZE,hand)) ? printf("YES"):printf("NO");
    return 0;
}

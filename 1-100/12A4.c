#include <stdio.h>
#define size 3
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        step+=width;
        scanf("\n");
    }
}
int check(char *biarr) {
    rep (i,0,3) {
        rep (j,0,3) {
            if (*((biarr+3*i)+j)!=*((biarr+3*(2-i))+2-j)) return 0;
        }
    }
    return 1;
}
int main() {
    int board[size][size];
    scan(board,size,size);
    if (check(board)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

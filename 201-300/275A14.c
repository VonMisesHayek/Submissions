#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define SIZE 3
void scan(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%d",((biarr+step)+j));
        scanf("\n");
        step+=width;
    }
}
void initialize(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) *((biarr+step)+j)=1;
        step+=width;
    }
}
void print(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) printf("%d",*((biarr+step)+j));
        printf("\n");
        step+=width;
    }
}
int is_in(int x, int y, int l, int w) {
    return (x>=0 && y>=0 && x<l && y<w);
}
void toggle(int *biarr, int *board, int length, int width) {
    int step=0,par;
    initialize(board,length,width);
    rep (i,0,length) {
        rep (j,0,width) {
            par=(*((biarr+step)+j))%2;
            if (par) {
                rep (k,-1,2) {
                    rep (l,-1,2) {
                        if ((k==0 || l==0) && is_in(i+k,j+l,length,width)) {
                            *((board+(i+k)*width)+j+l)=1-*((board+(i+k)*width)+j+l);
                        }
                    }
                }
            }
        }
        step+=width;
    }
    print(board,length,width);
}
int main() {
    int press[SIZE][SIZE],board[SIZE][SIZE];
    scan(press,SIZE,SIZE);
    toggle(press,board,SIZE,SIZE);
    return 0;
}

#include <stdio.h>
#define SIZE 4
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        scanf("\n");
        step+=width;
    }
}
int is_in(int x, int y, int l, int w) {
    return (x>=0 && y>=0 && x<l && y<w);
}
int win(char *biarr, int length, int width) {
    int x[8]={2,2,0,-2,-2,-2,0,2},y[8]={0,-2,-2,-2,0,2,2,2},step=0;
    rep (i,0,length) {
        rep (j,0,width) {
            if (*((biarr+step)+j)=='x') {
                rep (k,0,8) {
                    if (is_in(i+x[k],j+y[k],length,width)) {
                        char end=*((biarr+width*(i+x[k])+j+y[k]));
                        char mid=*((biarr+width*(i+x[k]/2)+j+y[k]/2));
                        if ((end=='x' && mid=='.') || (end=='.' && mid=='x')) return 1;
                    }
                }
            }
        }
        step+=width;
    }
    return 0;
}
int main() {
    char field[SIZE][SIZE]; scan(field,SIZE,SIZE);
    (win(field,SIZE,SIZE)) ? printf("YES"):printf("NO");
    return 0;
}

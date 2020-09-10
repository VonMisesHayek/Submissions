#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        scanf("\n");
        step+=width;
    }
}
int is_inside(int x, int y, int l, int w) {
    return (x>=0 && y>=0 && x<l && y<w);
}
int check(char *biarr, int length, int width) {
    rep (i,0,length) {
        rep (j,0,width) {
            int count=0,step=i*width;
            if (is_inside(i-1,j,length,width) && *((biarr+step-width)+j)=='o') count++;
            if (is_inside(i+1,j,length,width) && *((biarr+step+width)+j)=='o') count++;
            if (is_inside(i,j-1,length,width) && *((biarr+step)+j-1)=='o') count++;
            if (is_inside(i,j+1,length,width) && *((biarr+step)+j+1)=='o') count++;
            if (count%2!=0) return 0;
        }
    }
    return 1;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char board[len][len];
    scan(board,len,len);
    (check(board,len,len)) ? printf("YES"):printf("NO");
    return 0;
}

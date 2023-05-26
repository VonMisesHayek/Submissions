#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int is_in(int x, int y, int n, int m) {
    return (x>=0 && y>=0 && x<n && y<m);
}
void read(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        step+=width; scanf("\n");
    }
}
int greed(char *biarr, int length, int width) {
    int res=0,step=0;
    int wolf[length][width];
    rep (i,0,length) {
        rep (j,0,width) {
            if (*((biarr+step)+j)=='W') {
                wolf[i][j]=1;
            } else {
                wolf[i][j]=0;
            }
        }
        step+=width;
    } step=0;
    rep (i,0,length) {
        rep (j,0,width) {
            if (*((biarr+step)+j)=='P') {
                if (is_in(i-1,j,length,width) && *((biarr+step-width)+j)=='W') {
                    res+=wolf[i-1][j];
                    wolf[i-1][j]=0;
                } else if (is_in(i+1,j,length,width) && *((biarr+step+width)+j)=='W') {
                    res+=wolf[i+1][j];
                    wolf[i+1][j]=0;
                } else if (is_in(i,j-1,length,width) && *((biarr+step)+j-1)=='W') {
                    res+=wolf[i][j-1];
                    wolf[i][j-1]=0;
                } else if (is_in(i,j+1,length,width) && *((biarr+step)+j+1)=='W') {
                    res+=wolf[i][j+1];
                    wolf[i][j+1]=0;
                }
            }
        }
        step+=width;
    }
    return res;
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    char grid[n][m]; read(grid,n,m);
    printf("%d",greed(grid,n,m));
    return 0;
}

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
void fill(int *mat, char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) *((mat+step)+j)=0;
        step+=width;
    } step=0;
    rep (i,0,length) {
        rep (j,0,width) {
            rep (k,-1,2) {
                if (is_in(i+k,j,length,width) && k!=0) {
                    if (*((biarr+step+k*width)+j)=='.') (*((mat+step)+j))++;
                }
                if (is_in(i,j+k,length,width)) {
                    if (*((biarr+step)+j+k)=='.') (*((mat+step)+j))++;
                }
            }
        }
        step+=width;
    }
}
int cover(char *biarr, int length, int width) {
    int adj[length][width],step=0;
    fill(adj,biarr,length,width);
    rep (i,0,length) {
        rep (j,0,width) {
            if (adj[i][j]==5 && *((biarr+step)+j)=='.') {
                rep (k,-1,2) {
                    rep (l,-1,2) adj[i+k][j+l]=0;
                    *((biarr+step+k*width)+j)='#';
                    *((biarr+step)+j+k)='#';
                }
                if (is_in(i+2,j,length,width)) adj[i+2][j]=0;
                if (is_in(i-2,j,length,width)) adj[i-2][j]=0;
                if (is_in(i,j+2,length,width)) adj[i][j+2]=0;
                if (is_in(i,j-2,length,width)) adj[i][j-2]=0;
            }
        }
        step+=width;
    } step=0;
    rep (i,0,length) {
        rep (j,0,width) {
            if (*((biarr+step)+j)=='.') return 0;
        }
        step+=width;
    }
    return 1;
}
int main() {
    int size; scanf("%d\n",&size);
    char board[size][size]; scan(board,size,size);
    (cover(board,size,size)) ? printf("YES"):printf("NO");
    return 0;
}

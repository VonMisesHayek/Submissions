#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b ; i++)
void read(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%d",((biarr+step)+j));
        step+=width;
    }
}
int is_in(int x, int y, int length, int width) {
    return (x>=0 && y>=0 && x<length && y<width);
}
int diagonal(int *biarr, int length, int width, int x, int y) {
    int posx,posy,step,res=*((biarr+x*width)+y);
    posx=x-1; posy=y-1; step=(x-1)*width;
    while (is_in(posx,posy,length,width)) {
        res+=*((biarr+step)+posy);
        posx--; posy--; step-=width;
    }
    posx=x-1; posy=y+1; step=(x-1)*width;
    while (is_in(posx,posy,length,width)) {
        res+=*((biarr+step)+posy);
        posx--; posy++; step-=width;
    }
    posx=x+1; posy=y-1; step=(x+1)*width;
    while (is_in(posx,posy,length,width)) {
        res+=*((biarr+step)+posy);
        posx++; posy--; step+=width;
    }
    posx=x+1; posy=y+1; step=(x+1)*width;
    while (is_in(posx,posy,length,width)) {
        res+=*((biarr+step)+posy);
        posx++; posy++; step+=width;
    }
    return res;
}
int max_sum(int *biarr, int length, int width) {
    int max=-1,aux;
    rep (i,0,length) {
        rep (j,0,width) {
            aux=diagonal(biarr,length,width,i,j);
            if (max<aux) max=aux;
        }
    }
    return max;
}
int main() {
    int queries,n,m; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&n,&m);
        int board[n][m]; read(board,n,m);
        printf("%d\n",max_sum(board,n,m));
    }
    return 0;
}

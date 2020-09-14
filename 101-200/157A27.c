#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%d",((biarr+step)+j));
        step+=width;
        scanf("\n");
    }
}
int winning(int *biarr, int length, int width) {
    int rowsum[length],colsum[width],step,sum,count=0;
    step=0;
    rep (i,0,length) {
        sum=0;
        rep (j,0,width) sum+=*((biarr+step)+j);
        step+=width;
        rowsum[i]=sum;
    }
    rep (j,0,width) {
        sum=0; step=0;
        rep (i,0,length) {
            sum+=*((biarr+step)+j);
            step+=width;
        }
        colsum[j]=sum;
    }
    rep (i,0,length) {
        rep (j,0,width) {
            if (colsum[j]>rowsum[i]) count++;
        }
    }
    return count;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int board[len][len];
    scan(board,len,len);
    printf("%d",winning(board,len,len));
    return 0;
}

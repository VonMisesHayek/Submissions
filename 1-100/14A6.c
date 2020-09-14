#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int max(int x, int y) {
    return (x>=y) ? x:y;
}
int min(int x, int y) {
    return (x<=y) ? x:y;
}
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        scanf("\n");
        step+=width;
    }
}
void print(char *biarr, int x0, int x1, int y0, int y1, int width) {
    int step=x0*width;
    rep (i,x0,x1+1) {
        rep (j,y0,y1+1) printf("%c",*((biarr+step)+j));
        printf("\n");
        step+=width;
    }
}
int check_row_low(char *biarr, int length, int width, int row) {
    int step=width*row;
    rep (j,0,width) {
        if (*((biarr+step)+j)=='*') return j;
    }
    return width;
}
int check_col_low(char *biarr, int length, int width, int col) {
    int step=0;
    rep (i,0,length) {
        if (*((biarr+step)+col)=='*') return i;
        step+=width;
    }
    return length;
}
int check_row_high(char *biarr, int length, int width, int row) {
    int step=width*row;
    for (int j=width-1; j>=0; j--) {
        if (*((biarr+step)+j)=='*') return j;
    }
    return 0;
}
int check_col_high(char *biarr, int length, int width, int col) {
    int step=(length-1)*width;
    for (int i=length-1; i>=0; i--) {
        if (*((biarr+step)+col)=='*') return i;
        step-=width;
    }
    return 0;
}
void limits(char *biarr, int length, int width, int *x0, int *x1, int *y0, int *y1) {
    *x0=length; *x1=0; *y0=width; *y1=0;
    rep (i,0,length) {
        *y0=min(check_row_low(biarr,length,width,i),*y0);
        *y1=max(check_row_high(biarr,length,width,i),*y1);
    }
    rep (j,0,width) {
        *x0=min(check_col_low(biarr,length,width,j),*x0);
        *x1=max(check_col_high(biarr,length,width,j),*x1);
    }
}
int main() {
    int len,wid,x0,x1,y0,y1;
    scanf("%d %d\n",&len,&wid);
    char sheet[len][wid];
    scan(sheet,len,wid);
    limits(sheet,len,wid,&x0,&x1,&y0,&y1);
    print(sheet,x0,x1,y0,y1,wid);
    return 0;
}

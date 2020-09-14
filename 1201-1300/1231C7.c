#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define rev(i,a,b) for (int i=a; i!=b; i--)
void scan(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%d",((biarr+step)+j));
        scanf("\n"); step+=width;
    }
}
int max(int x, int y) {
    return (x>=y) ? x:y;
}
int min(int x, int y) {
    return (x<=y) ? x:y;
}
int is_in(int x, int y, int l, int w) {
    return (x>=0 && x<l && y>=0 && y<w);
}
int check(int *biarr, int length, int width) {
    int step=0,temp;
    rep (i,0,length) {
        rep (j,0,width) {
            temp=*((biarr+step)+j);
            if (is_in(i-1,j,length,width) && temp<=*((biarr+step-width)+j)) return 0;
            if (is_in(i,j-1,length,width) && temp<=*((biarr+step)+j-1)) return 0;
            if (is_in(i+1,j,length,width) && temp>=*((biarr+step+width)+j)) return 0;
            if (is_in(i,j+1,length,width) && temp>=*((biarr+step)+j+1)) return 0;
        }
        step+=width;
    }
    return 1;
}
void fill(int *biarr, int length, int width, int *can) {
    int step=(length-2)*width,minv,maxv,minh,maxh,mi,ma;
    rev (i,length-2,0) {
        rev (j,width-2,0) {
            if (*((biarr+step)+j)==0) {
                minv=*((biarr+step-width)+j)+1;
                maxv=*((biarr+step+width)+j)-1;
                minh=*((biarr+step)+j-1)+1;
                maxh=*((biarr+step)+j+1)-1;
                mi=max(minv,minh); ma=min(maxv,maxh);
                if (mi>ma) {
                    (*can)=0;
                } else {
                    *((biarr+step)+j)=ma;
                }
            }
        }
        step-=width;
    }
}
long sum(int *biarr, int length, int width) {
    long res=0; int step=0;
    rep (i,0,length) {
        rep (j,0,width) res+=*((biarr+step)+j);
        step+=width;
    }
    return res;
}
void print(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) printf("%d ",*((biarr+step)+j));
        printf("\n"); step+=width;
    }
}
int main() {
    int len,wid,can=1;
    scanf("%d %d\n",&len,&wid);
    int matrix[len][wid];
    scan(matrix,len,wid);
    fill(matrix,len,wid,&can);
    if (!check(matrix,len,wid) || can==0) {
        printf("-1");
    } else {
        printf("%ld",sum(matrix,len,wid));
    }
    return 0;
}

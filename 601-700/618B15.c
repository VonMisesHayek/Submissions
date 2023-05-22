#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *biarr, int length, int width) {
    int step=0,curr;
    rep (i,0,length) {
        rep (j,0,width) *((biarr+step)+j)=0;
        step+=width;
    } step=0;
    rep (i,0,length) {
        rep (j,0,width) {
            scanf("%d",&curr);
            if (i!=j) (*((biarr+step)+curr-1))++;
        }
        scanf("\n");
        step+=width;
    }
}
int perm(int *biarr, int length, int width, int p) {
    int step=0;
    rep (i,0,length) {
        if (*((biarr+step)+p-1)==length-p) return i;
        step+=width;
    }
}
void result(int *biarr, int length, int width) {
    int arr[length]; rep (i,0,length) arr[i]=0;
    rep (i,0,length-1) {
        arr[perm(biarr,length,width,i+1)]=i+1;
    }
    rep (i,0,length) {
        if (arr[i]==0) {
            printf("%d ",length);
        } else {
            printf("%d ",arr[i]);
        }
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
int main() {
    int size; scanf("%d\n",&size);
    int board[size][size]; scan(board,size,size);
    result(board,size,size);
    return 0;
}

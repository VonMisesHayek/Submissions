#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(int *biarr, int length, int width) {
    int step;
    rep (i,0,length) {
        step=i*width;
        rep (j,0,width) scanf("%d",(biarr+step+j));
        scanf("\n");
    }
}
void initialize(int *arr, int length, int v) {
    rep (i,0,length) *(arr+i)=v;
}
void good(int *biarr, int size) {
    int cars[size],step,count=0;
    initialize(cars,size,1);
    rep (i,0,size) {
        step=i*size;
        rep (j,0,size) {
            if (*(biarr+step+j)>=2) *(cars+j)=0;
        }
    }
    for (int i=0; i<size; i++) count+=cars[i];
    printf("%d\n",count);
    rep (i,0,size) {
        if (cars[i]==1) printf("%d ",i+1);
    }
}
int main() {
    int len;
    scanf("%d\n",&len);
    int matrix[len][len];
    read(matrix,len,len);
    good(matrix,len);
    return 0;
}

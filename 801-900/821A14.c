#include <stdio.h>
void read(long *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) scanf("%ld",((biarr+i*width)+j));
        scanf("\n");
    }
}
void write(long *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) printf("%ld ",*((biarr+i*width)+j));
        printf("\n");
    }
}
int check(long *biarr, int length, int width, int x, int y) {
    int temp=*((biarr+x*width)+y),elem;
    for (int i=0; i<length; i++) {
        elem=*((biarr+i*width)+y);
        for (int j=0; j<width; j++) {
            if (temp==(elem+*((biarr+x*width)+j))) return 1;
        }
    }
    return 0;
}
int good(long *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<length; j++) {
            if (*((biarr+i*width)+j)>1 && check(biarr,length,width,i,j)==0) return 0;
        }
    }
    return 1;
}
int main() {
    int size;
    scanf("%d\n",&size);
    long board[size][size];
    read(board,size,size);
    if (good(board,size,size)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

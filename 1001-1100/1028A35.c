#include <stdio.h>
void scan(char *biarr, int row, int col) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) scanf("%c",((biarr+i*col)+j));
        scanf("\n");
    }
}
void print(char *biarr, int row, int col) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) printf("%c",*((biarr+i*col)+j));
        printf("\n");
    }
}
int blackrow(char *biarr, int index, int col) {
    for (int j=0; j<col; j++) {
        if (*((biarr+index*col)+j)=='B') return j;
    }
    return -1;
}
int reverse(char *biarr, int index, int col) {
    for (int j=col-1; j>=0; j--) {
        if (*((biarr+index*col)+j)=='B') return j;
    }
}
void center(char *biarr, int row, int col) {
    int i=0,find=0;
    while (i<row && find==0) {
        int aux=blackrow(biarr,i,col);
        if (aux!=-1) {
            int rev=reverse(biarr,i,col);
            printf("%d %d",i+(rev-aux)/2+1,(aux+rev)/2+1);
            find=1;
        }
        i++;
    }
}
int main() {
    int rows,cols;
    scanf("%d %d\n",&rows,&cols);
    char board[rows][cols];
    scan(board,rows,cols);
    center(board,rows,cols);
    return 0;
}

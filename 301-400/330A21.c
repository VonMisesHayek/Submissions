#include <stdio.h>
int canrow(char *arr, int index, int width) {
    int res=1;
    for (int j=0; j<width; j++) {
        if (*((arr+index*width)+j)=='S') res=0;
    }
    return res;
}
int cancol(char *arr, int length, int index, int width) {
    int res=1;
    for (int i=0; i<length; i++) {
        if (*((arr+i*width)+index)=='S') res=0;
    }
    return res;
}
int main() {
    int rows,cols,count=0;
    char ch;
    scanf("%d %d\n",&rows,&cols);
    char board[rows][cols];
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            scanf("%c",&board[i][j]);
        }
        scanf("\n");
    }
    for (int i=0; i<rows; i++) {
        if (canrow(board,i,cols)) {
            for (int j=0; j<cols; j++) {
                if (board[i][j]=='.') {
                    count++;
                    board[i][j]='-';
                }
            }
        }
    }
    for (int j=0; j<cols; j++) {
        if (cancol(board,rows,j,cols)) {
            for (int i=0; i<rows; i++) {
                if (board[i][j]=='.') {
                    count++;
                    board[i][j]='-';
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}

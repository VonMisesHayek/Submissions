#include <stdio.h>
int exes(char *arr, int length) {
    int count=0;
    for (int i=1; i<length-1; i++) {
        for (int j=1; j<length-1; j++) {
            if (*((arr+i*length)+j)=='X' && *((arr+(i-1)*length)+j-1)=='X') {
                if (*((arr+(i-1)*length)+j+1)=='X' && *((arr+(i+1)*length)+j-1)=='X') {
                    if (*((arr+(i+1)*length)+j+1)=='X') count++;
                }
            }
        }
    }
    return count;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char board[len][len];
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) scanf("%c",&board[i][j]);
        scanf("\n");
    }
    printf("%d",exes(board,len));
    return 0;
}

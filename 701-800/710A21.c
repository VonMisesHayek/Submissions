#include <stdio.h>
int moves(char ch, int n) {
    if (ch=='a' || ch=='h') {
        if (n==1 || n==8) {
            return 3;
        } else {
            return 5;
        }
    } else {
        if (n==1 || n==8) {
            return 5;
        } else {
            return 8;
        }
    }
}
int main() {
    char col;
    int row;
    scanf("%c%d",&col,&row);
    printf("%d",moves(col,row));
    return 0;
}

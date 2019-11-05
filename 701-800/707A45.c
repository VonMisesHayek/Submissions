#include <stdio.h>
int baw(char c) {
    return (c=='B' || c=='G' || c=='W');
}
int main() {
    int rows,cols;
    char ch;
    int film=1;
    scanf("%d %d\n",&rows,&cols);
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            scanf("%c ",&ch);
            if (baw(ch)==0) film=0;
        }
    }
    if (film==0) {
        printf("#Color");
    } else {
        printf("#Black&White");
    }
    return 0;
}

#include <stdio.h>
int can_seat(char *seats) {
    int p1=(seats[0]=='O' && seats[1]=='O');
    int p2=(seats[3]=='O' && seats[4]=='O');
    if (p1) {
        seats[0]='+';
        seats[1]='+';
    } else if (p2) {
        seats[3]='+';
        seats[4]='+';
    }
    return p1||p2;
}
void assign(char arr[][5], char *seats, int pos, int width) {
    for (int i=0; i<width; i++) arr[pos][i]=seats[i];
}
void print(char arr[][5], int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) printf("%c",arr[i][j]);
        printf("\n");
    }
}
int main() {
    int rows,valid=0;
    scanf("%d\n",&rows);
    char bus[rows][5];
    char line[5];
    for (int i=0; i<rows; i++) {
        scanf("%s",line);
        if (valid==0 && can_seat(line)) {
            valid=1;
            assign(bus,line,i,5);
        } else {
            assign(bus,line,i,5);
        }
    }
    if (valid) {
        printf("YES\n");
        print(bus,rows,5);
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() {
    int a=-1,b=-1,c=-1,d=-1,e=-1;
    int column;
    int row=1;
    while (row<6 && (a!=1 && b!=1 && c!=1 && d!=1 && e!=1)) {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        if (a==1) {
            column=1;
        } else if (b==1) {
            column=2;
        } else if (c==1) {
            column=3;
        } else if (d==1) {
            column=4;
        } else if (e==1) {
            column=5;
        } else {
            row++;
        }
    }
    printf("%d",abs(row-3)+abs(column-3));
    return 0;
}

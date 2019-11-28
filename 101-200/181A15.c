#include <stdio.h>
void rectangle(int *p1, int *p2, int *p3) {
    if (p1[0]==p2[0]) {
        printf("%d",p3[0]+1);
    } else if (p1[0]==p3[0]) {
        printf("%d",p2[0]+1);
    } else {
        printf("%d",p1[0]+1);
    }
    printf(" ");
    if (p1[1]==p2[1]) {
        printf("%d",p3[1]+1);
    } else if (p1[1]==p3[1]) {
        printf("%d",p2[1]+1);
    } else {
        printf("%d",p1[1]+1);
    }
}
int main() {
    int len,wid;
    int a[2],b[2],c[2],k=0;
    char ch;
    scanf("%d %d\n",&len,&wid);
    for (int i=0; i<len; i++) {
        for (int j=0; j<wid; j++) {
            scanf("%c",&ch);
            if (ch=='*') {
                if (k==0) {
                    a[0]=i;
                    a[1]=j;
                } else if (k==1) {
                    b[0]=i;
                    b[1]=j;
                } else {
                    c[0]=i;
                    c[1]=j;
                }
                k++;
            }
        }
        scanf("\n");
    }
    rectangle(a,b,c);
    return 0;
}

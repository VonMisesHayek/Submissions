#include <stdio.h>
void can(int n, int a, int b) {
    int cup=a,med=b,freee=n;
    while (freee>0 && cup+med>0) {
        if (cup-5>=0) {
            cup-=5;
            freee--;
        } else if (cup>0 && cup<5) {
            cup=0;
            freee--;
        }
        if (med-10>=0 && freee>0) {
            med-=10;
            freee--;
        } else if (med>0 && med<10 && freee>0) {
            med=0;
            freee--;
        }
    }
    if (cup==0 && med==0 && freee>=0) {
        printf("YES");
    } else {
        printf("NO");
    }
}
int main() {
    int a1,a2,a3,b1,b2,b3,shelf,cups,medals;
    scanf("%d %d %d\n%d %d %d\n%d",&a1,&a2,&a3,&b1,&b2,&b3,&shelf);
    cups=a1+a2+a3;
    medals=b1+b2+b3;
    can(shelf,cups,medals);
    return 0;
}

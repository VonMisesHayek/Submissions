#include <stdio.h>
int can(int a, int b) {
    if ((a<=b && b<a+2) || (a==9 && b==1)) {
        return 1;
    } else {
        return 0;
    }
}
void construct(int a, int b) {
    if (a==9 && b==1) {
        printf("%d 10",a);
    } else if (a==b) {
        printf("%d %d",10*a,10*a+1);
    } else {
        printf("%d %d",10*a+9,10*b);
    }
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (can(a,b)) {
        construct(a,b);
    } else {
        printf("-1");
    }
    return 0;
}

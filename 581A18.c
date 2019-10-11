#include <stdio.h>
int main() {
    int a,b;
    int result[2];
    scanf("%d %d",&a,&b);
    if (a<=b) {
        result[0]=a;
        result[1]=(b-a)/2;
    } else {
        result[0]=b;
        result[1]=(a-b)/2;
    }
    printf("%d %d",result[0],result[1]);
    return 0;
}

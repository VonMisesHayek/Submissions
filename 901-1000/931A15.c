#include <stdio.h>
#include <math.h>
long tiredness(int a, int b) {
    int x=abs(b-a)/2;
    long res=(x*(x+1));
    if ((2*x)!=abs(b-a)) res+=(x+1);
    return res;
}
int main() {
    int x,y;
    scanf("%d\n%d",&x,&y);
    printf("%ld",tiredness(x,y));
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    int wina=0,winb=0;
    scanf("%d %d",&a,&b);
    for (int i=1; i<7; i++) {
        if (abs(i-a)<abs(i-b)) {
            wina++;
        } else if (abs(i-a)>abs(i-b)) {
            winb++;
        }
    }
    printf("%d %d %d",wina,6-wina-winb,winb);
    return 0;
}

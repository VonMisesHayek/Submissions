#include <stdio.h>
int main() {
    int drinks;
    double sum=0;
    scanf("%d",&drinks);
    for (int i=0; i<drinks; i++) {
        double juice;
        scanf("%lf",&juice);
        sum+=juice;
    }
    printf("%f",sum/(drinks));
    return 0;
}

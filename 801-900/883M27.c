#include <stdio.h>
#include <stdlib.h>
int min_length(int qx, int qy, int fx, int fy) {
    int x,y;
    if (qx>fx) {
        x=fx-1;
    } else if (qx<fx) {
        x=fx+1;
    } else {
        x=fx;
    }
    if (qy>fy) {
        y=fy-1;
    } else if (qy<fy) {
        y=fy+1;
    } else {
        y=fy;
    }
    if (qx==fx) {
        return 4+2*abs(qy-y);
    } else if (qy==fy) {
        return 4+2*abs(qx-x);
    } else {
        return 2*(abs(qx-x)+abs(qy-y));
    }
}
int main() {
    int qx,qy,fx,fy;
    scanf("%d %d\n%d %d",&qx,&qy,&fx,&fy);
    printf("%d",min_length(qx,qy,fx,fy));
    return 0;
}

#include <stdio.h>
int main() {
    int pings;
    scanf("%d",&pings);
    int xa=0,ya=0,xb=0,yb=0;
    for (int i=0; i<pings; i++) {
        int t,x,y;
        scanf("%d %d %d",&t,&x,&y);
        if (t==1) {
            xa+=x;
            ya+=y;
        } else {
            xb+=x;
            yb+=y;
        }
    }
    if (xa>=ya) {
        printf("%s",(char*)"LIVE\n");
    } else {
        printf("%s",(char*)"DEAD\n");
    }
    if (xb>=yb) {
        printf("%s",(char*)"LIVE");
    } else {
        printf("%s",(char*)"DEAD");
    }
    return 0;
}

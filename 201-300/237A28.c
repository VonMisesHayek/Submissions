#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int main() {
    int people,h,m,ph=-1,pm=-1,max=0,count=0; scanf("%d\n",&people);
    rep (i,0,people) {
        scanf("%d %d\n",&h,&m);
        if (h==ph && m==pm) {
            count++;
        } else {
            count=1;
        }
        if (max<count) max=count;
        ph=h; pm=m;
    }
    printf("%d",max);
    return 0;
}

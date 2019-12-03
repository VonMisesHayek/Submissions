#include <stdio.h>
int main() {
    long queries,i=0;
    long long x,y;
    int posx=0,negx=0,keep=1;;
    scanf("%ld\n",&queries);
    while (i<queries && keep) {
        scanf("%I64d %I64d\n",&x,&y);
        posx+=(x>0);
        negx+=(x<0);
        if (posx>1 && negx>1) keep=0;
        i++;
    }
    if (keep) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

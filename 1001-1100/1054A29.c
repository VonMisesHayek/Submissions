#include <stdio.h>
#include <math.h>
int main() {
    int x,y,z,t1,t2,t3;
    scanf("%d %d %d %d %d %d",&x,&y,&z,&t1,&t2,&t3);
    int stairs=t1*abs(x-y);
    int elevator=t2*abs(x-z)+3*t3+t2*abs(x-y);
    if (elevator<=stairs) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int people,fence,width;
    int bend=0;
    int norm=0;
    scanf("%d %d",&people,&fence);
    for (int i=0; i<people; i++) {
        int add;
        scanf("%d ",&add);
        if (add>fence) {
            bend++;
        } else {
            norm++;
        }
    }
    printf("%d",2*bend+norm);
    return 0;
}

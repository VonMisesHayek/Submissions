#include <stdio.h>
int main() {
    int events;
    int count=0;
    int keep=0;
    scanf("%d",&events);
    for (int i=0; i<events; i++) {
        int curr;
        scanf("%d",&curr);
        if (curr<0 && keep==0) {
            count++;
        } else {
            keep+=curr;
        }
    }
    printf("%d",count);
    return 0;
}

#include <stdio.h>
int minutes(int h, int m) {
    return 1440-60*h-m;
}
int main() {
    int queries,h,m;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d\n",&h,&m);
        printf("%d\n",minutes(h,m));
    }
    return 0;
}

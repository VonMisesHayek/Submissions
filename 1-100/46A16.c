#include <stdio.h>
void pos(int seed, int len) {
    if (seed%len==0) {
        printf("%d ",len);
    } else {
        printf("%d ",seed%len);
    }
}
int main() {
    int len,seed=1;
    scanf("%d",&len);
    for (int i=1; i<len; i++) {
        seed+=i;
        pos(seed,len);
    }
    return 0;
}

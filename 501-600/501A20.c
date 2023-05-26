#include <stdio.h>
int max(int x, int y) {
    return (x>y) ? x:y;
}
int score(int p, int t) {
    return max(3*p/10,p-t*p/250);
}
int main() {
    int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
    int misha=score(a,c),vasya=score(b,d);
    if (misha>vasya) {
        printf("Misha");
    } else if (misha==vasya) {
        printf("Tie");
    } else {
        printf("Vasya");
    }
    return 0;
}

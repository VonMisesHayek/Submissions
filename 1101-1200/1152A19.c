#include <stdio.h>
int max(int a, int b) {
    if (a>=b) {
        return a;
    } else {
        return b;
    }
}
int min(int a, int b) {
    return -max(-a,-b);
}
int main() {
    int chests,keys;
    int evech=0,eveke=0;
    long long ch,ke;
    scanf("%d %d\n",&chests,&keys);
    for (int i=0; i<chests; i++) {
        scanf("%lld",&ch);
        if (ch%2==0) evech++;
    }
    for (int i=0; i<keys; i++) {
        scanf("%lld",&ke);
        if (ke%2==0) eveke++;
    }
    printf("%d",min(evech,keys-eveke)+min(chests-evech,eveke));
    return 0;
}

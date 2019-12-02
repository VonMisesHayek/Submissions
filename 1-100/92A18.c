#include <stdio.h>
int advance(int roll, int mod) {
    if (roll+1==mod) {
        return mod;
    } else {
        return (roll+1)%mod;
    }
}
int main() {
    int walrus,chips,step=1;
    scanf("%d %d",&walrus,&chips);
    while (chips-step>=0) {
        chips=chips-step;
        step=advance(step,walrus);
    }
    printf("%d",chips);
    return 0;
}

#include <stdio.h>
int main() {
    long long restaurants,maxtime,f,t,joy=-1000000000;
    scanf("%I64d %I64d\n",&restaurants,&maxtime);
    for (long long i=0; i<restaurants; i++) {
        scanf("%I64d %I64d\n",&f,&t);
        if (t>maxtime) {
            if (joy<(f+maxtime-t)) joy=f+maxtime-t;
        } else {
            if (joy<f) joy=f;
        }
    }
    printf("%I64d",joy);
    return 0;
}

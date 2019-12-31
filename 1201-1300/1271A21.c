#include <stdio.h>
long min(long a, long b) {
    if (a<=b) {
        return a;
    } else {
        return b;
    }
}
long mini(long a, long b, long c) {
    if (a<=b && a<=c) {
        return a;
    } else if (b<=c && b<=a) {
        return b;
    } else {
        return c;
    }
}
long suits(long a, long b, long c, long d, long e, long f) {
    long x=min(a,d),y=mini(b,c,d);
    long compo=e*x+f*mini(b,c,d-x),compt=e*min(a,d-y)+f*y;
    return -min(-compo,-compt);
}
int main() {
    long a,b,c,d,e,f;
    scanf("%ld\n%ld\n%ld\n%ld\n%ld\n%ld",&a,&b,&c,&d,&e,&f);
    printf("%ld",suits(a,b,c,d,e,f));
    return 0;
}

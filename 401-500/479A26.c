#include <stdio.h>
int max(int x, int y) {
    return (x>=y) ? x:y;
}
int maxexp(int a, int b, int c) {
    int m1=max(a+b*c,a*b+c),m2=max((a+b)*c,a*(b+c)),m3=max(a+b+c,a*b*c);
    return max(m1,max(m2,m3));
}
int main() {
    int a,b,c; scanf("%d\n%d\n%d",&a,&b,&c);
    printf("%d",maxexp(a,b,c));
    return 0;
}

#include <stdio.h>
int dist(int a, int b, int c, int d) {
    int s=a+b+c+d;
    return (a+b==c+d || a+c==b+d || a+d==b+c || 2*a==s || 2*b==s || 2*c==s || 2*d==s);
}
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (dist(a,b,c,d)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int profit(int b, int p, int f, int h, int c) {
    int res=0,a=b;
    if (h>=c) {
        res+=h*min(p,a/2);
        if (p<=a/2) {
            a=a-2*p;
            res+=c*min(f,a/2);
        }
    } else {
        res+=c*min(f,a/2);
        if (f<=a/2) {
            a=a-2*f;
            res+=h*min(p,a/2);
        }
    }
    return res;
}
int main() {
    int queries,b,p,f,h,c;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d %d\n%d %d\n",&b,&p,&f,&h,&c);
        printf("%d\n",profit(b,p,f,h,c));
    }
    return 0;
}

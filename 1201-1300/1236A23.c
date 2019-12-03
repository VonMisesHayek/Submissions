#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(y<x);
}
int max(int x, int y) {
    return -min(-x,-y);
}
int stones(int a, int b, int c) {
    int max=0,con=a,x,y;
    while (con>=0) {
        x=min(con,b/2);
        y=min(b-2*x,c/2);
        if (max<3*(x+y)) max=3*(x+y);
        con--;
    }
    return max;
}
int main() {
    int queries,a,b,c;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d %d\n",&a,&b,&c);
        printf("%d\n",stones(a,b,c));
    }
    return 0;
}

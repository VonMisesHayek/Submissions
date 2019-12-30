#include <stdio.h>
int max(int x, int y) {
    return x*(x>=y)+y*(x<y);
}
int final(int w, int h, int u1, int d1, int u2, int d2) {
    int pos=h,curr=w;
    while (pos>0) {
        curr+=pos;
        if (pos==d1) {
            curr=max(0,curr-u1);
        } else if (pos==d2) {
            curr=max(0,curr-u2);
        }
        pos--;
    }
    return curr;
}
int main() {
    int ball,heig,w1,w2,h1,h2;
    scanf("%d %d\n%d %d\n%d %d",&ball,&heig,&w1,&h1,&w2,&h2);
    printf("%d",final(ball,heig,w1,h1,w2,h2));
    return 0;
}

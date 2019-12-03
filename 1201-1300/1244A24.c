#include <stdio.h>
int divceil(int a, int b) {
    if (a%b==0) {
        return a/b;
    } else {
        return a/b+1;
    }
}
void carry(int a, int b, int c, int d, int k) {
    int x=divceil(a,c),y=divceil(b,d);
    if (x+y<=k) {
        printf("%d %d\n",x,y);
    } else {
        printf("-1\n");
    }
}
int main() {
    int queries,a,b,c,d,k;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d %d %d %d\n",&a,&b,&c,&d,&k);
        carry(a,b,c,d,k);
    }
    return 0;
}

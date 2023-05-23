#include <stdio.h>
int taxi(int a, int b, int c, int d) {
    if (d!=0) {
        return d+taxi(a,b,c,0);
    } else if (c!=0) {
        if (c>=a) {
            return c+taxi(0,b,0,d);
        } else {
            return c+taxi(a-c,b,0,d);
        }
    } else if (b!=0) {
        if (b%2==0) {
            return b/2+taxi(a,0,c,d);
        } else if (a>=2) {
            return b/2+1+taxi(a-2,0,c,d);
        } else {
            return b/2+1+taxi(0,0,c,d);
        }
    } else if (a!=0) {
        if (b==1 && a>1) {
            return 1+taxi(a-2,b-1,c,d);
        } else {
            return a/4+(a%4!=0)+taxi(0,b,c,d);
        }
    } else if (a==0 && b==0 && c==0 && d==0) {
        return 0;
    }
}
int main() {
    int len,a=0,b=0,c=0,d=0,curr; scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        switch (curr) {
            case 1:
                a++; break;
            case 2:
                b++; break;
            case 3:
                c++; break;
            case 4:
                d++; break;
        }
    }
    printf("%d",taxi(a,b,c,d));
    return 0;
}

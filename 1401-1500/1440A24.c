#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int cost(int length, int cz, int co, int h, int z, int d) {
    return cz*(z+d)+co*(length-z-d)+abs(d)*h;
}
int mincost(char *s, int length, int cz, int co, int h) {
    int z=0;
    rep (i,0,length) {
        if (s[i]=='0') z++;
    }
    int min=INT_MAX;
    rep (d,-z,length-z+1) {
        int temp=cost(length,cz,co,h,z,d);
        if (min>temp) min=temp;
    }
    return min;
}
int main() {
    int queries,len,cz,co,h; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d %d %d\n",&len,&cz,&co,&h);
        char str[len+1]; scanf("%s\n",str);
        printf("%d\n",mincost(str,len,cz,co,h));
    }
    return 0;
}

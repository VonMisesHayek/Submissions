#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *abc, int length) {
    int step=0;
    rep (i,0,3) {
        rep (j,0,length) scanf("%d",((abc+step)+j));
        step+=length;
        scanf("\n");
    }
}
void choose(int *abc, int length) {
    int p[length],step; p[0]=*((abc));
    rep (i,1,length-1) {
        step=0;
        while (*((abc+step)+i)==p[i-1]) step+=length;
        p[i]=*((abc+step)+i);
    }
    step=0;
    while (*((abc+step)+length-1)==p[length-2] || *((abc+step)+length-1)==p[0]) step+=length;
    p[length-1]=*((abc+step)+length-1);
    rep (i,0,length) printf("%d ",p[i]);
    printf("\n");
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int abc[3][len]; scan(abc,len);
        choose(abc,len);
    }
    return 0;
}

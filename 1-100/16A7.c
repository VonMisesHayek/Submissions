#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        step+=width;
        scanf("\n");
    }
}
int is_stripe(char *biarr, int index, int width) {
    int step=index*width;
    char color=*((biarr+step));
    rep (j,1,width) {
        if (*((biarr+step)+j)!=color) return 0;
    }
    return 1;
}
int iso(char *biarr, int length, int width) {
    rep (i,0,length) {
        if (is_stripe(biarr,i,width)==0) return 0;
    }
    int step=0;
    rep (i,0,length-1) {
        if (*((biarr+step))==*((biarr+step+width))) return 0;
        step+=width;
    }
    return 1;
}
int main() {
    int len,wid; scanf("%d %d\n",&len,&wid);
    char flag[len][wid]; scan(flag,len,wid);
    (iso(flag,len,wid)) ? printf("YES"):printf("NO");
    return 0;
}

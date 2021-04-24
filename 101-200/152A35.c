#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) scanf("%c",((biarr+step)+j));
        scanf("\n");
        step+=width;
    }
}
void initialize(int *arr, int length) {
    rep (i,0,length) *(arr+i)=0;
}
void best(char *biarr, int length, int width, int col, int *siv) {
    int step=0,max='0',temp;
    rep (i,0,length) {
        if (max<*((biarr+step)+col)) max=*((biarr+step)+col);
        step+=width;
    } step=0;
    rep (i,0,length) {
        if (max==*((biarr+step)+col)) siv[i]=1;
        step+=width;
    }
}
int successful(char *biarr, int length, int width) {
    int sieve[length],res=0;
    initialize(sieve,length);
    rep (j,0,width) best(biarr,length,width,j,sieve);
    rep (i,0,length) res+=sieve[i];
    return res;
}
int main() {
    int len,wid;
    scanf("%d %d\n",&len,&wid);
    char grade[len][wid];
    scan(grade,len,wid);
    printf("%d",successful(grade,len,wid));
    return 0;
}

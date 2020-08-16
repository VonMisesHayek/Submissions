#include <stdio.h>
#define size 12
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(char *str, int length) {
    rep (i,0,length) scanf("%c",(str+i));
    scanf("\n");
}
int checkcol(char *str, int length, int di, int col) {
    int q=length/di;
    rep (i,0,di) {
        if (str[i*q+col]=='O') return 0;
    }
    return 1;
}
int check(char *str, int length, int di) {
    int q=length/di;
    rep (i,0,q) {
        if (checkcol(str,length,di,i)) return 1;
    }
    return 0;
}
void ways(int *str, int length) {
    int count=0,divs[]={1,2,3,4,6,12},sieve[]={0,0,0,0,0,0};
    rep (i,0,6) {
        if (check(str,length,divs[i])) {
            count++;
            sieve[i]=1;
        }
    }
    printf("%d ",count);
    rep (i,0,6) {
        if (sieve[i]==1) printf("%dx%d ",divs[i],length/divs[i]);
    } printf("\n");
}
int main() {
    int queries;
    char card[size];
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scan(card,size);
        ways(card,size);
    }
    return 0;
}

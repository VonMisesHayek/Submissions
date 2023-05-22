#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define ABC 26
int two_letters(char *biarr, int length, int width) {
    int sieve[ABC],step=0,count=0; rep (i,0,ABC) sieve[i]=0;
    rep (i,0,length) {
        rep (j,0,width) sieve[*((biarr+step)+j)-'a']=1;
        step+=width;
    }
    rep (i,0,ABC) count+=sieve[i];
    return (count==2);
}
int xx(char *biarr, int n) {
    char c=*((biarr+0)+0);
    int step=0;
    rep (i,0,n) {
        rep (j,0,n) {
            if ((i==j || (i+j)==n-1) && *((biarr+step)+j)!=c) {
                return 0;
            } else if ((i!=j && (i+j)!=n-1) && *((biarr+step)+j)==c) {
                return 0;
            }
        }
        step+=n;
    }
    return 1;
}
int main() {
    int size; scanf("%d\n",&size);
    char paper[size][size];
    rep (i,0,size) {
        rep (j,0,size) scanf("%c",&paper[i][j]);
        scanf("\n");
    }
    if (two_letters(paper,size,size)) {
        (xx(paper,size)) ? printf("YES"):printf("NO");
    } else {
        printf("NO");
    }
    return 0;
}

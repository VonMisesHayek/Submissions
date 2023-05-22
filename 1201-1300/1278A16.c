#include <stdio.h>
#include <string.h>
#define ABC 26
#define rep(i,a,b) for (int i=a; i<b; i++)
void fill(int *siv, char *str, int start, int end) {
    rep (i,0,ABC) siv[i]=0;
    rep (i,start,end) siv[str[i]-'a']++;
}
int cont(int *arro, int *arrt, int length) {
    rep (i,0,length) {
        if (arro[i]>arrt[i]) return 0;
    }
    return 1;
}
int hash(char *p, char *h) {
    int lp=strlen(p),lh=strlen(h);
    if (lp>lh) return 0;
    int sp[ABC],sieve[ABC],lim=lh-lp+1;
    rep (i,0,ABC) sp[i]=0;
    rep (i,0,lp) sp[p[i]-'a']++;
    rep (i,0,lim) {
        fill(sieve,h,i,i+lp);
        if (cont(sp,sieve,ABC)) return 1;
    }
    return 0;
}
int main() {
    int queries; scanf("%d\n",&queries);
    char p[101],h[101];
    rep (i,0,queries) {
        scanf("%s\n%s\n",p,h);
        (hash(p,h)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

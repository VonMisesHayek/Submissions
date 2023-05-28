#include <stdio.h>
#include <string.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define ABC 26
char name[]="Timur";
void fill(int *arro, int *arrt, int leno, char *str, int lent) {
    rep(i,0,leno) {
        arro[i]=0;
        arrt[i]=0;
    }
    rep (i,0,lent) {
        if ('A'<=str[i] && str[i]<='Z') {
            arro[str[i]-'A']++;
        } else {
            arrt[str[i]-'a']++;
        }
    }
}
int check(char *str, int length) {
    if (length!=strlen(name)) return 0;
    int upp[ABC],low[ABC],timo[ABC],timt[ABC];
    fill(timo,timt,ABC,name,strlen(name));
    fill(upp,low,ABC,str,length);
    rep (i,0,ABC) {
        if (upp[i]!=timo[i]) return 0;
        if (low[i]!=timt[i]) return 0;
    }
    return 1;
}
int main() {
    int queries; scanf("%d\n",&queries);
    rep (i,0,queries) {
        int len; scanf("%d\n",&len);
        char s[len+1]; scanf("%s",s);
        (check(s,len)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

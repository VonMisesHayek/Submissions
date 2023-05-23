#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int sol(int length) {
    int one=0,two=0,curr;
    rep (i,0,length) {
        scanf("%d",&curr);
        (curr==1) ? one++:two++;
    }
    scanf("\n");
    if ((one==0 && two%2==0) || (one!=0 && one%2==0)) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        (sol(len)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

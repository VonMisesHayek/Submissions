#include <stdio.h>
typedef long long ll;
int main() {
    ll n,m,curr,pos=0; scanf("%I64d %I64d\n",&n,&m);
    ll dorm[n+1]; dorm[0]=0;
    for (ll i=1; i<=n; i++) scanf("%I64d",&dorm[i]);
    for (ll i=1; i<=n; i++) dorm[i]+=dorm[i-1];
    for (ll i=0; i<m; i++) {
        scanf("%I64d",&curr);
        while (dorm[pos+1]<curr) pos++;
        printf("%I64d %I64d\n",pos+1,curr-dorm[pos]);
    }
    return 0;
}

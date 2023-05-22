#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
void scan(ll *arro, ll *arrt, int length) {
    rep (i,0,length) scanf("%I64d",(arro+i));
    scanf("\n");
    rep (i,0,length) scanf("%I64d",(arrt+i));
}
ll minimum(ll *arr, int length) {
    ll m=1000000001;
    rep (i,0,length) {
        if (arr[i]<m) m=arr[i];
    }
    return m;
}
ll max(ll x, ll y) {
    return (x>=y) ? x:y;
}
ll fix(ll *arro, ll *arrt, int length) {
    ll res=0,c=minimum(arro,length),o=minimum(arrt,length);
    rep (i,0,length) res+=max(arro[i]-c,arrt[i]-o);
    return res;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        ll candy[len],orange[len]; scan(candy,orange,len);
        printf("%I64d\n",fix(candy,orange,len));
    }
    return 0;
}

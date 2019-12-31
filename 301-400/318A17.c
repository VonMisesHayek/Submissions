#include <stdio.h>
typedef long long ll;
int main() {
    ll n,k,lim;
    scanf("%I64d %I64d",&n,&k);
    lim=(n+1)/2;
    k--;
    if (k<lim) {
        printf("%I64d",2*k+1);
    } else {
        printf("%I64d",2*(k-lim+1));
    }
    return 0;
}

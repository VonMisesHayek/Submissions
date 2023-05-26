#include <stdio.h>
#include <math.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
int ordinary(ll n) {
    int power=floor(log(n)/log(10)+0.5*(n>=999999990));
    int count=0;
    float it=(pow(10,power+1)-1)/9;
    while ((count+1)*it<=n) count++;
    return 9*power+count;
}
int main() {
    int queries; scanf("%d\n",&queries);
    ll n;
    rep (i,0,queries) {
        scanf("%I64d\n",&n);
        printf("%d\n",ordinary(n));
    }
    return 0;
}

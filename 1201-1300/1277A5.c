#include <stdio.h>
#include <math.h>
typedef long long ll;
ll generate(int ex) {
    ll res=1;
    for (int i=0; i<ex; i++) res=res*10+1;
    return res;
}
int beaucount(ll n) {
    int res=(int)log10(n);
    ll cont=generate(res),it=cont;
    res*=9;
    for (int i=0; i<9; i++) {
        if (cont<=n) res++;
        cont+=it;
    }
    return res;
}
int main() {
    int queries;
    ll curr;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d\n",&curr);
        printf("%d\n",beaucount(curr));
    }
    return 0;
}

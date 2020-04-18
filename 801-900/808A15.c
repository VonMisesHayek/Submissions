#include <stdio.h>
typedef long long ll;
ll lucky(ll n) {
    ll y=n,dig;
    while (y>0) {
        dig=y%10;
        y/=10;
    }
    dig++;
    while (dig<n) dig*=10;
    return dig;
}
int main() {
    ll year;
    scanf("%I64d",&year);
    printf("%I64d",lucky(year)-year);
    return 0;
}

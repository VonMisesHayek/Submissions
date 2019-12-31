#include <stdio.h>
typedef long long ll;
void readrev(ll *arr, long length) {
    for (long i=length-1; i>=0; i--) scanf("%I64d",(arr+i));
}
ll min(ll x, ll y) {
    return (x<=y) ? x:y;
}
ll max(ll x, ll y) {
    return (x>=y) ? x:y;
}
ll buy(ll *arr, long length) {
    ll res=0,prev=1000000001,aux;
    for (long i=0; i<length; i++) {
        aux=min(max(0,prev-1),arr[i]);
        res+=aux;
        prev=aux;
    }
    return res;
}
int main() {
    long len;
    scanf("%ld\n",&len);
    ll choc[len];
    readrev(choc,len);
    printf("%I64d",buy(choc,len));
    return 0;
}

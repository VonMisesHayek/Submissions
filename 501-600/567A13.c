#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
ll min(ll x, ll y) {
    if (x<=y) {
        return x;
    } else {
        return y;
    }
}
ll max(ll x, ll y) {
    if (x>=y) {
        return x;
    } else {
        return y;
    }
}
void read(ll *arr, long length) {
    for (long i=0; i<length; i++) scanf("%I64d",(arr+i));
}
void mail(ll *arr, long length) {
    ll inf=(arr[1]-arr[0]),sup=(arr[length-1]-arr[0]);
    printf("%I64d %I64d\n",inf,sup);
    for (long i=1; i<length-1; i++) {
        inf=min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
        sup=max(arr[length-1]-arr[i],arr[i]-arr[0]);
        printf("%I64d %I64d\n",inf,sup);
    }
    inf=arr[length-1]-arr[length-2];
    sup=arr[length-1]-arr[0];
    printf("%I64d %I64d\n",inf,sup);
}
int main() {
    long len;
    scanf("%ld\n",&len);
    ll city[len];
    read(city,len);
    mail(city,len);
    return 0;
}

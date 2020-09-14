#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void initialize(int *arr, int length) {
    rep (i,0,length) *(arr+i)=0;
}
void coalition(int *arr, int length) {
    int sum=0,alice=arr[0],acc=alice,sieve[length],k=1;
    initialize(sieve,length); sieve[0]=1;
    rep (i,0,length) sum+=arr[i];
    rep (i,1,length) {
        if (2*arr[i]<=alice) {
            acc+=arr[i];
            sieve[i]=1;
            k++;
        }
    }
    if (sum<2*acc) {
        printf("%d\n",k);
        rep (i,0,length) {
            if (sieve[i]) printf("%d ",i+1);
        }
    } else {
        printf("0");
    }
}
int main() {
    int len;
    scanf("%d\n",&len);
    int party[len];
    scan(party,len);
    coalition(party,len);
    return 0;
}

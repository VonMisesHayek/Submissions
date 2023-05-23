#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define size 101
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int minimize(int *arr, int length) {
    int sieve[size],a=0,b; rep (i,0,size) sieve[i]=0;
    rep (i,0,length) sieve[arr[i]]++;
    while (sieve[a]>=2) a++;
    b=a;
    while (sieve[b]>=1) b++;
    return a+b;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int set[len]; scan(set,len);
        printf("%d\n",minimize(set,len));
    }
    return 0;
}

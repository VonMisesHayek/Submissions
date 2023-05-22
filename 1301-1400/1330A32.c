#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int complete(int *arr, int length, int x) {
    int sieve[100],pos=0,zero=0;
    rep (i,0,100) sieve[i]=0;
    rep (i,0,length) sieve[arr[i]-1]=1;
    rep (i,0,100) zero+=(sieve[i]==0);
    if (x>zero) {
        return 100+x-zero;
    } else {
        while (x>0) {
            if (sieve[pos]==0) {
                x--;
                sieve[pos]=1;
            }
            pos++;
        }
        while (pos<100 && sieve[pos]) pos++;
        return pos;
    }
}
int main() {
    int queries,len,x; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d %d\n",&len,&x);
        int cont[len]; scan(cont,len);
        printf("%d\n",complete(cont,len,x));
    }
    return 0;
}

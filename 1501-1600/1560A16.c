#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define SIZE 10000
int dislike(int n) {
    return (n%3==0 || n%10==3);
}
void fill(int *arr, int length) {
    rep (i,0,length) arr[i]=0;
    rep (i,1,length) {
        if (!dislike(i)) arr[i]=1;
    }
}
int seq(int *arr, int k) {
    int count=0,pos=0;
    while (count<k) {
        if (arr[pos]==1) count++;
        pos++;
    }
    return pos-1;
}
int main() {
    int queries,k; scanf("%d\n",&queries);
    int sieve[SIZE]; fill(sieve,SIZE);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&k);
        printf("%d\n",seq(sieve,k));
    }
    return 0;
}

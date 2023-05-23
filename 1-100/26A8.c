#include <stdio.h>
#include <math.h>
#define SIZE 3000
int p[SIZE];
int is_prime(int n) {
    if (n==2 || n==3) return 1;
    if (n<=1 || n%2==0 || n%3==0) return 0;
    int root=sqrt(n);
    for (int i=5; i<=root; i+=6) {
        if (n%i==0 || n%(i+2)==0) return 0;
    }
    return 1;
}
int almost(int n) {
    int count=0;
    for (int i=2; i<n; i++) {
        if (p[i] && n%i==0) count++;
    }
    return count==2;
}
int acc(int n) {
    int res=0;
    for (int i=0; i<SIZE; i++) p[i]=is_prime(i);
    for (int i=1; i<=n; i++) res+=almost(i);
    return res;
}
int main() {
    int n; scanf("%d",&n);
    printf("%d",acc(n));
    return 0;
}

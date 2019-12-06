#include <stdio.h>
int root(int num) {
    int i=1;
    while (i*i<num) i++;
    return i;
}
int is_prime(int num) {
    int keep=1,lim=root(num),i=2;
    while (keep && i<=lim) {
        if (num%i==0) keep=0;
        i++;
    }
    return keep*(num!=1)+(num==2);
}
int armageddon(int n, int m) {
    int keep=1,i=n+1;
    while (i<m && keep) {
        if (is_prime(i)) keep=0;
        i++;
    }
    return (keep && is_prime(m));
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if (armageddon(n,m)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
int power(int a, int b) {
    int res=1;
    for (int i=0; i<b; i++) res*=a;
    return res;
}
int beautiful(int m) {
    int k=0,a=m;
    while (a%2==0) {
        k++;
        a/=2;
    }
    return (a==(power(2,k+1)-1));
}
int great(int n) {
    int lim=n/2,res=0;
    if (beautiful(n)) return n;
    for (int i=1; i<=lim; i++) {
        if (n%i==0 && beautiful(i)) res=i;
    }
    return res;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",great(n));
    return 0;
}

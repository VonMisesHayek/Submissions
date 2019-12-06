#include <stdio.h>
int gcd(int a, int b) {
    if (a<b) {
        return gcd(a,b-a);
    } else if (a>b) {
        return gcd(a-b,b);
    } else {
        return a;
    }
}
void fraction(int n) {
    int inf=n/2,save;
    double max=0;
    for (int i=inf+1; i<n; i++) {
        if (gcd(n-i,i)==1 && max*i<(n-i)) {
            max=(double) (n-i)/i;
            save=i;
        }
    }
    printf("%d %d",n-save,save);
}
int main() {
    int sum;
    scanf("%d",&sum);
    fraction(sum);
    return 0;
}

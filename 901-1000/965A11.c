#include <stdio.h>
int cei(int a, int b) {
    return a/b+(a%b!=0);
}
int main() {
    long k,n,s,p;
    scanf("%ld %ld %ld %ld",&k,&n,&s,&p);
    printf("%d",cei(k*cei(n,s),p));
    return 0;
}

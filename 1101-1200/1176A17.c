#include <stdio.h>
int moves(unsigned long long n) {
    int count=0;
    unsigned long long aux=n,aux2;
    while (aux>1) {
        aux2=aux;
        if (aux%2==0) {aux=aux/2; count++;}
        if (aux%3==0) {aux=2*(aux/3); count++;}
        if (aux%5==0) {aux=4*(aux/5); count++;}
        if (aux2==aux) return -1;
    }
    if (aux==1) return count;
}
int main() {
    int queries;
    unsigned long long curr;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d\n",&curr);
        printf("%d\n",moves(curr));
    }
    return 0;
}

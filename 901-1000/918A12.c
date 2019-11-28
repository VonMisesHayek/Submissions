#include <stdio.h>
void fibonacci(int n) {
    int f1=1,f2=1,temp;
    char sieve[n+1];
    for (int i=1; i<n; i++) sieve[i]='o';
    sieve[n]='\0';
    sieve[f1-1]='O';
    if (n>1) sieve[f2]='O';
    while (f1+f2<n+1) {
        sieve[f1+f2-1]='O';
        temp=f1;
        f1+=f2;
        f2=temp;
    }
    printf("%s",sieve);
}
int main() {
    int len;
    scanf("%d",&len);
    fibonacci(len);
    return 0;
}

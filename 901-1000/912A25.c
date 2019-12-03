#include <stdio.h>
long long balls(long long a, long long b, long long c, long long d, long long e) {
    long long first=2*c+d,second=d+3*e;
    return (first-a)*(first>a)+(second-b)*(second>b);
}
int main() {
    long long yellow,blue,y,g,b;
    scanf("%I64d %I64d\n%I64d %I64d %I64d",&yellow,&blue,&y,&g,&b);
    printf("%I64d",balls(yellow,blue,y,g,b));
    return 0;
}

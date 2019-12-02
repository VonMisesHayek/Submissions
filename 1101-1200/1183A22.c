#include <stdio.h>
int interesting(int num) {
    int a=num;
    int sum=0;
    while (a>0) {
        sum+=a%10;
        a/=10;
    }
    return (sum%4)==0;
}
int next(int first) {
    int a=first;
    while (interesting(a)==0) a++;
    return a;
}
int main() {
    int seed;
    scanf("%d",&seed);
    printf("%d",next(seed));
    return 0;
}

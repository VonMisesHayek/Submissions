#include <stdio.h>
int main() {
    int queries;
    long long a,b,c;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d %I64d %I64d\n",&a,&b,&c);
        printf("%I64d\n",(a+b+c)/2);
    }
    return 0;
}

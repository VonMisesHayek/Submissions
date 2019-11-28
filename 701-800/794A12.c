#include <stdio.h>
int main() {
    long long a,b,c,curr;
    long long bank,count=0;
    scanf("%I64d %I64d %I64d\n",&a,&b,&c);
    scanf("%I64d\n",&bank);
    for (long long i=0; i<bank; i++) {
        scanf("%I64d",&curr);
        if (b<curr && curr<c) count++;
    }
    printf("%I64d",count);
    return 0;
}

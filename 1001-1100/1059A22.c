#include <stdio.h>
int main() {
    long long customer,day,brea,arrive,service,prev,count=0;
    scanf("%I64d %I64d %I64d\n",&customer,&day,&brea);
    for (long long i=0; i<customer; i++) {
        scanf("%I64d %I64d\n",&arrive,&service);
        count+=(arrive-prev)/brea;
        prev=arrive+service;
    }
    count+=(day-prev)/brea;
    printf("%I64d",count);
    return 0;
}

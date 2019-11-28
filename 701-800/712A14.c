#include <stdio.h>
void memory(long long *arr, long len) {
    for (long long i=0; i<len-1; i++) printf("%I64d ",arr[i]+arr[i+1]);
    printf("%I64d",arr[len-1]);
}
int main() {
    long len;
    scanf("%ld\n",&len);
    long long crow[len];
    for (long i=0; i<len; i++) scanf("%I64d",&crow[i]);
    memory(crow,len);
    return 0;
}

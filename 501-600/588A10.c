#include <stdio.h>
void fill(int *arro, int *arrt, long length) {
    for (long i=0; i<length; i++) scanf("%d %d\n",(arro+i),(arrt+i));
}
void print(int *arr, long length) {
    for (long i=0; i<length; i++) printf("%d ",*(arr+i));
}
long spend(int *arro, int *arrt, long length) {
    long res=0,pos=0;
    int buy;
    while (pos<length) {
        buy=arrt[pos];
        while (buy<=arrt[pos] && pos<length) {
            res+=(arro[pos]*buy);
            pos++;
        }
    }
    return res;
}
int main() {
    long len;
    scanf("%ld\n",&len);
    int need[len],price[len],sieve[len];
    fill(need,price,len);
    printf("%ld",spend(need,price,len));
    return 0;
}

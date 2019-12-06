#include <stdio.h>
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
int teams(int *arr, int length) {
    for (int i=1; i<length; i++) {
        if (arr[i-1]==1 && arr[i]==1) return 2;
    }
    return 1;
}
int main() {
    int queries,len,curr,sieve[100];
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        initialize(sieve,100);
        scanf("%d\n",&len);
        for (int j=0; j<len; j++) {
            scanf("%d",&curr);
            sieve[curr-1]=1;
        }
        scanf("\n");
        printf("%d\n",teams(sieve,100));
    }
    return 0;
}

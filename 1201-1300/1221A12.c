#include <stdio.h>
#define MAXPOW 12
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
void assign(int *arr, long long num) {
    long long count=1;
    int power=0;
    while (count<num) {
        count*=2;
        power++;
    }
    arr[power]++;
}
int win(int *arr, int length) {
    long long coef[]={1,2,4,8,16,32,64,128,256,512,1024,2048},sum=0;
    for (int i=0; i<length; i++) sum+=coef[i]*arr[i];
    return (2048<=sum);
}
int main() {
    int queries,multi,powers[MAXPOW];
    long long curr;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        initialize(powers,MAXPOW);
        scanf("%d\n",&multi);
        for (int j=0; j<multi; j++) {
            scanf("%I64d",&curr);
            if (curr<=2048) assign(powers,curr);
        }
        scanf("\n");
        if (win(powers,MAXPOW)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

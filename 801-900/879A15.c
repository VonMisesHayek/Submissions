#include <stdio.h>
long long appointment(int s, int d, int *acc) {
    int counter=s;
    while (counter<=*acc) {
        counter+=d;
    }
    *acc=counter;
}
int main() {
    int drs,s,d;
    long long days=0;
    scanf("%d\n",&drs);
    for (int i=0; i<drs; i++) {
        scanf("%d %d\n",&s,&d);
        appointment(s,d,&days);
    }
    printf("%I64d",days);
    return 0;
}

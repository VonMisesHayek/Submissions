#include <stdio.h>
int main() {
    long long days,names,pos=0,curr;
    scanf("%I64d %I64d\n",&days,&names);
    for (long long i=0; i<days; i++) {
        scanf("%I64d",&curr);
        pos+=curr;
        printf("%I64d ",pos/names);
        pos=pos%names;
    }
    return 0;
}

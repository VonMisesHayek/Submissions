#include <stdio.h>
int main() {
    int len,a,b,sum=0;
    scanf("%d\n",&len);
    int ranks[len-1];
    for (int i=0; i<len-1; i++) scanf("%d",&ranks[i]);
    scanf("%d %d",&a,&b);
    for (int i=a-1; i<b-1; i++) sum+=ranks[i];
    printf("%d",sum);
    return 0;
}

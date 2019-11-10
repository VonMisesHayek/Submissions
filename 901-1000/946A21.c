#include <stdio.h>
int main() {
    int len,curr,sum=0;
    scanf("%d",&len);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        if (curr>=0) {
            sum+=curr;
        } else {
            sum-=curr;
        }
    }
    printf("%d",sum);
    return 0;
}

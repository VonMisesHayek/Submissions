#include <stdio.h>
int main() {
    int len,even=0,odd=0,ie,io,curr;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        if (curr%2==0) {
            if (even==0) ie=i;
            even++;
        } else {
            if (odd==0) io=i;
            odd++;
        }
    }
    if (even==1) {
        printf("%d",ie+1);
    } else {
        printf("%d",io+1);
    }
    return 0;
}

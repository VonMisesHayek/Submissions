#include <stdio.h>
int main() {
    int len,odd=0,curr,sum=0;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        if (curr%2) odd++;
        sum+=curr;
    }
    if (sum%2) {
        printf("%d",odd);
    } else {
        printf("%d",len-odd);
    }
    return 0;
}

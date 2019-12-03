#include <stdio.h>
int main() {
    int len,curr,pos=0,neg=0;
    scanf("%d\n",&len);
    for (int i=0; i<len; i++) {
        scanf("%d",&curr);
        if (curr>0) {
            pos++;
        } else if (curr<0) {
            neg++;
        }
    }
    if (2*pos>=len) {
        printf("1");
    } else if (2*neg>=len) {
        printf("-1");
    } else {
        printf("0");
    }
    return 0;
}

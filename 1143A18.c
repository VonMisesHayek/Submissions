#include <stdio.h>
int main() {
    int doors;
    scanf("%d",&doors);
    int left=0;
    int right=0;
    for (int i=0; i<doors; i++) {
        int curr;
        scanf("%d",&curr);
        if (curr==0) {
            left=i;
        } else {
            right=i;
        }
    }
    if (left<right) {
        printf("%d",left+1);
    } else {
        printf("%d",right+1);
    }
    return 0;
}

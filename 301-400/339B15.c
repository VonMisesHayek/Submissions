#include <stdio.h>
int main() {
    int len,task,pos=1,curr;
    long long tot=0;
    scanf("%d %d\n",&len,&task);
    for (int i=0; i<task; i++) {
        scanf("%d",&curr);
        if (pos<=curr) {
            tot+=(curr-pos);
        } else {
            tot+=(curr-pos+len);
        }
        pos=curr;
    }
    printf("%I64d",tot);
    return 0;
}

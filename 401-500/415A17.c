#include <stdio.h>
int main() {
    int lights,push,curr;
    scanf("%d %d\n",&lights,&push);
    int on[lights],off[lights];
    for (int i=0; i<lights; i++) on[i]=1;
    for (int i=0; i<push; i++) {
        scanf("%d",&curr);
        for (int j=curr-1; j<lights; j++) {
            if (on[j]==1) {
                on[j]=0;
                off[j]=curr;
            }
        }
    }
    for (int i=0; i<lights; i++) printf("%d ",off[i]);
    return 0;
}

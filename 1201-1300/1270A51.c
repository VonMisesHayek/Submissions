#include <stdio.h>
int main() {
    int queries,n,k1,k2,win,curr;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d %d\n",&n,&k1,&k2);
        for (int j=0; j<k1; j++) {
            scanf("%d",&curr);
            if (curr==n) win=1;
        }
        for (int j=0; j<k2; j++) {
            scanf("%d",&curr);
            if (curr==n) win=0;
        }
        if (win) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

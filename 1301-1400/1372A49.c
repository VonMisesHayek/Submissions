#include <stdio.h>
int main() {
    int queries,len; scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&len);
        for (int j=0; j<len; j++) printf("%d ",len);
        printf("\n");
    }
    return 0;
}

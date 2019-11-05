#include <stdio.h>
int main() {
    int n;
    int max=0;
    int min=101;
    int maxpos,minpos;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int height;
        scanf(" %d",&height);
        if (height>max) {
            max=height;
            maxpos=i;
        }
        if (height<=min) {
            min=height;
            minpos=i;
        }
    }
    int restar=(maxpos>minpos);
    printf("%d",maxpos+n-1-minpos-restar);
    return 0;
}

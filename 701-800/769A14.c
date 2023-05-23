#include <stdio.h>
int main() {
    int n,max=0,min=10000,curr; scanf("%d\n",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&curr);
        if (curr>max) max=curr;
        if (curr<min) min=curr;
    }
    printf("%d",(max+min)/2);
    return 0;
}

#include <stdio.h>
int main() {
    int perf;
    scanf("%d",&perf);
    int count=0;
    int max;
    int min;
    for (int i=0; i<perf; i++) {
        int curr;
        scanf("%d ",&curr);
        if (i==0) {
            max=curr;
            min=curr;
        } else {
            if (curr>max) {
                max=curr;
                count++;
            } else if (curr<min) {
                min=curr;
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}

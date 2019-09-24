#include <stdio.h>
int main() {
    int n,k;
    int count=0;
    int i=0;
    int num;
    scanf("%d %d\n",&n,&k);
    scanf("%d ",&num);
    while (i<k-1 && num>0) {
        count++;
        scanf("%d ",&num);
        i++;
    }
    int score=num;
    while (i<n && num>0 && num>=score) {
        count++;
        scanf("%d ",&num);
        i++;
    }
    printf("%d",count);
    return 0;
}

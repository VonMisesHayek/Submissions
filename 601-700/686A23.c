#include <stdio.h>
int main() {
    int queries,count=0;
    long long ice,curr;
    char sign;
    scanf("%d %I64d\n",&queries,&ice);
    for (int i=0; i<queries; i++) {
        scanf("%c %I64d\n",&sign,&curr);
        if (sign=='+') {
            ice+=curr;
        } else {
            if (ice-curr>=0) {
                ice-=curr;
            } else {
                count++;
            }
        }
    }
    printf("%I64d %d",ice,count);
    return 0;
}

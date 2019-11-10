#include <stdio.h>
void table(int len, int sum) {
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            if (i==j) {
                printf("%d",sum);
            } else {
                printf("%d",0);
            }
            if (j<len-1) printf(" ");
        }
        printf("\n");
    }
}
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    table(n,k);
    return 0;
}

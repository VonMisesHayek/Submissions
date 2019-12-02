#include <stdio.h>
void can(int n) {
    if (n>11 || n%3==0 || n==7 || n==10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main() {
    int cases,curr;
    scanf("%d\n",&cases);
    for (int i=0; i<cases; i++) {
        scanf("%d\n",&curr);
        can(curr);
    }
    return 0;
}

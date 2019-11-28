#include <stdio.h>
void perm(int n) {
    if (n%2) {
        printf("%d",-1);
    } else {
        int lim=n/2;
        for (int i=1; i<=lim; i++) printf("%d %d ",2*i,2*i-1);
    }
}
int main() {
    int len;
    scanf("%d",&len);
    perm(len);
    return 0;
}

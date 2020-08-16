#include <stdio.h>
void generate(int n, int t) {
    if (n==1 && t==10) {
        printf("-1");
        return;
    }
    printf("%d",t);
    for (int i=0; i<n-2; i++) printf("0");
    if (t!=10 && n>1) printf("0");
}
int main() {
    int n,t;
    scanf("%d %d",&n,&t);
    generate(n,t);
    return 0;
}

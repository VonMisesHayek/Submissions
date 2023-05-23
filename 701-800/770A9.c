#include <stdio.h>
void generate(int n, int k) {
    for (int i=0; i<n; i++) printf("%c",'a'+i%k);
}
int main() {
    int len,k; scanf("%d %d\n",&len,&k);
    generate(len,k);
    return 0;
}

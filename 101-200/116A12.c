#include <stdio.h>
int main() {
    int n;
    int max=-1;
    int pass=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        pass=pass-a+b;
        if (pass>max) max=pass;
    }
    printf("%d",max);
    return 0;
}

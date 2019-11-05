#include <stdio.h>
int main() {
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int tot=k*w*(w+1)/2;
    if (tot<=n) {
        printf("%d",0);
    } else {
        printf("%d",tot-n);
    }
    return 0;
}

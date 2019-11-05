#include <stdio.h>
int main() {
    int citizens;
    int max=-1;
    int tot=0;
    scanf("%d",&citizens);
    int welfare[citizens];
    for (int i=0; i<citizens; i++) {
        int add;
        scanf("%d",&add);
        welfare[i]=add;
        if (add>max) max=add;
    }
    for (int i=0; i<citizens; i++) {
        tot+=max-welfare[i];
    }
    printf("%d",tot);
    return 0;
}

#include <stdio.h>
int main() {
    int prob,p,v,t,count=0;
    scanf("%d",&prob);
    for (int i=0; i<prob; i++) {
        scanf("%d %d %d",&p,&v,&t);
        if ((p+v+t)>=2) count++;
    }
    printf("%d",count);
    return 0;
}

#include <stdio.h>
int main() {
    long n;
    scanf("%d",&n);
    if (n%2==0) {
        long lim=n/2;
        printf("%d\n",lim);
        for (int i=0; i<lim; i++) printf("%d ",2);
    } else {
        long lim=n/2-1;
        printf("%d\n",lim+1);
        for (int i=0; i<lim; i++) printf("%d ",2);
        printf("%d",3);
    }
    return 0;
}

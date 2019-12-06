#include <stdio.h>
int main() {
    int days,i=0;
    long read,work,acc=0;
    scanf("%d %ld\n",&days,&read);
    while (i<days && acc<read) {
        scanf("%ld",&work);
        acc+=(86400-work);
        i++;
    }
    printf("%d",i);
    return 0;
}

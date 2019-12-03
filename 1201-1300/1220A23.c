#include <stdio.h>
int main() {
    long len,ens=0,zet=0;
    char ch;
    scanf("%ld\n",&len);
    for (long i=0; i<len; i++) {
        scanf("%c",&ch);
        if (ch=='n') {
            ens++;
        } else if (ch=='z') {
            zet++;
        }
    }
    for (long i=0; i<ens; i++) printf("1 ");
    for (long i=0; i<zet; i++) printf("0 ");
    return 0;
}

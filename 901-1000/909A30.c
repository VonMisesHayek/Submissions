#include <stdio.h>
#include <string.h>
void login(char *f, char *l) {
    int posf=1,posl=0,len=strlen(f);
    printf("%c",f[0]);
    while (posl==0 && posf<len) {
        if (f[posf]<l[posl]) {
            printf("%c",f[posf]);
            posf++;
        } else {
            printf("%c",l[0]);
            posl++;
        }
    }
    if (posl==0) printf("%c",l[0]);
}
int main() {
    char first[11],last[11]; scanf("%s %s",first,last);
    login(first,last);
    return 0;
}

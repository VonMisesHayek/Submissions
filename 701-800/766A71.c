#include <stdio.h>
#include <string.h>
int is_equal(char *str, long length) {
    char comp=str[0];
    for (long i=0; i<length; i++) {
        if (*(str+i)!=comp) return 0;
    }
    return 1;
}
int main() {
    char wordo[100001],wordt[100001];
    scanf("%s\n%s",wordo,wordt);
    long leno=strlen(wordo),lent=strlen(wordt);
    if (leno>lent) {
        printf("%ld",leno);
    } else if (lent>leno) {
        printf("%ld",lent);
    } else {
        if (is_equal(wordo,leno) && is_equal(wordt,lent) && wordo[0]==wordt[0]) {
            printf("-1");
        } else if (strcmp(wordo,wordt)==0) {
            printf("%ld",-1);
        } else {
            printf("%ld",lent);
        }
    }
    return 0;
}

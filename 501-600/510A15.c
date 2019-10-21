#include <stdio.h>
int main() {
    int dep,len;
    scanf("%d %d",&dep,&len);
    for (int i=0; i<dep; i++) {
        if (i%2==0) {
            for (int j=0; j<len; j++) printf("%c",'#');
            printf("\n");
        } else if (i%4==1) {
            for (int j=0; j<len-1; j++) printf("%c",'.');
            printf("%c\n",'#');
        } else {
            printf("%c",'#');
            for (int j=1; j<len; j++) printf("%c",'.');
            printf("\n");
        }
    }
    return 0;
}

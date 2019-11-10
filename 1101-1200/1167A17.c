#include <stdio.h>
int loc8(char *num) {
    int pos=0;
    int keep=1;
    while (*num && keep) {
        if (*num=='8') {
            keep=0;
        } else {
            pos++;
        }
        num++;
    }
    return pos;
}
int valid(char *num, int length) {
    return loc8(num)<=(length-11);
}
int main() {
    int quer,len;
    scanf("%d\n",&quer);
    for (int i=0; i<quer; i++) {
        scanf("%d\n",&len);
        char number[len];
        scanf("%s",number);
        if (valid(number,len)) {
            printf("YES");
        } else {
            printf("NO");
        }
        if (i<quer-1) printf("\n");
    }
    return 0;
}

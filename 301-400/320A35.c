#include <stdio.h>
#include <string.h>
int is_valid(char *num, int length) {
    for (int i=0; i<length; i++) {
        if (num[i]!='1' && num[i]!='4') return 0;
    }
    return 1;
}
int is_magic(char *num, int length) {
    for (int i=0; i<length; i++) {
        if (num[i]=='4') {
            if (i==0) {
                return 0;
            } else if (i==1 && num[0]=='4') {
                return 0;
            } else if (num[i-1]=='4' && num[i-2]!='1') {
                return 0;
            }
        }
    }
    return is_valid(num,length);
}
int main() {
    char number[10];
    scanf("%s",number);
    int len=strlen(number);
    if (is_magic(number,len)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

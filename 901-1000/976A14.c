#include <stdio.h>
int ones(char *arr) {
    int count=0;
    while (*arr) {
        if (*arr=='1') count++;
        arr++;
    }
    return count;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char bin[len];
    scanf("%s",bin);
    if (bin[0]!='0') printf("1");
    int ex=ones(bin);
    for (int i=ex; i<len; i++) printf("0");
    return 0;
}

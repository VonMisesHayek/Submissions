#include <stdio.h>
char bit(char ch, char cha) {
    if (ch==cha) {
        return '0';
    } else {
        return '1';
    }
}
void sum(char *num) {
    char curr;
    while (*num) {
        scanf("%c",&curr);
        printf("%c",bit(*num,curr));
        num++;
    }
}
int main() {
    char number[100];
    scanf("%s\n",number);
    sum(number);
    return 0;
}

#include <stdio.h>
#include <string.h>
int construct(char *str, char *end) {
    int len=strlen(str);
    char res[len+1];
    for (int i=0; i<len; i++) {
        if (str[i]<end[i]) {
            return 0;
        } else {
            res[i]=end[i];
        }
    }
    res[len]='\0';
    printf("%s",res);
    return 1;
}
int main() {
    char first[101],second[101];
    scanf("%s\n%s",first,second);
    if (construct(first,second)==0) printf("-1");
    return 0;
}

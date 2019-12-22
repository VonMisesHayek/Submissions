#include <stdio.h>
#include <string.h>
void assign(char *str1, char *str2) {
    int length=strlen(str1);
    for (int i=0; i<length; i++) str2[i]=str1[i];
    str2[length]='\0';
}
int main() {
    int len;
    char name1[11],name2[11],curr1[11],curr2[11];
    scanf("%s %s",name1,name2);
    scanf("%d\n",&len);
    printf("%s %s\n",name1,name2);
    for (int i=0; i<len; i++) {
        scanf("%s %s",curr1,curr2);
        if (strcmp(curr1,name1)==0) {
            assign(curr2,name1);
        } else if (strcmp(curr1,name2)==0) {
            assign(curr2,name2);
        }
        printf("%s %s\n",name1,name2);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
char is_upper(char c) {
    return (c>='A' && c<='Z');
}
char change_case(char c) {
    if (is_upper(c)) {
        return c-'A'+'a';
    } else {
        return c-'a'+'A';
    }
}
int main() {
    char* s=(char*) malloc(100*sizeof(char));
    scanf("%s\n",s);
    int size=strlen(s);
    int flag=1;
    int i=1;
    while(i<size && flag==1) {
        flag=is_upper(s[i]);
        i++;
    }
    if (flag) {
        for (int j=0; j<size; j++) printf("%c",change_case(s[j]));
    } else {
        for (int j=0; j<size; j++) printf("%c",s[j]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
char to_lower(char c) {
    if (c>='A' && c<='Z') {
        return c-'A'+'a';
    } else {
        return c;
    }
}
int compare(char* s1, char*s2) {
    int res=0;
    int size=strlen(s1);
    int i=0;
    while (i<size && res==0) {
        if (to_lower(s1[i])<to_lower(s2[i])) {
            res=-1;
        } else if (to_lower(s1[i])>to_lower(s2[i])) {
            res=1;
        }
        i++;
    }
    return res;
}
int main() {
    char s1[100];
    char s2[100];
    scanf("%s\n",s1);
    scanf("%s\n",s2);
    printf("%d",compare(s1,s2));
    return 0;
}

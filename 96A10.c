#include <stdio.h>
#include <string.h>
int is_dangerous(char* s) {
    int size=strlen(s);
    if (size<7) {
        return 0;
    } else {
        for (int i=0; i<size-6; i++) {
            int count=1;
            while (s[i+count]==s[i] && count<7) {
                count++;
            }
            if (count==7) return 1;
        }
    }
    return 0;
}
int main() {
    char s[100];
    scanf("%s",s);
    if (is_dangerous(s)==1) {
        printf("%s",(char*)"YES");
    } else {
        printf("%s",(char*)"NO");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int count(char* s) {
    int result=0;
    while (*s) {
        if (*s=='a') result++;
        s++;
    }
    return result;
}
int max(char* s) {
    int as=count(s);
    if (as>(strlen(s)/2)) {
        return strlen(s);
    } else {
        return 2*as-1;
    }
}
int main() {
    char s[50];
    scanf("%s",s);
    printf("%d",max(s));
    return 0;
}

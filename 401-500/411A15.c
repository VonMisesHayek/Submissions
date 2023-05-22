#include <stdio.h>
#include <string.h>
int complex(char *str) {
    int upp=0,low=0,dig=0;
    if (strlen(str)<5) return 0;
    while (*str) {
        if ('a'<=*str && *str<='z') low=1;
        if ('A'<=*str && *str<='Z') upp=1;
        if ('0'<=*str && *str<='9') dig=1;
        str++;
    }
    return (low && upp && dig);
}
int main() {
    char pass[101]; scanf("%s",pass);
    (complex(pass)) ? printf("Correct"):printf("Too weak");
    return 0;
}

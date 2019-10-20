#include <stdio.h>
int valid(char c) {
    return (c=='H' || c=='Q' || c=='9');
}
int can(char* s) {
    int res=0;
    while (*s) {
        if (valid(*s)) res=1;
        s++;
    }
    return res;
}
int main() {
    char* str=(char*) malloc(100*sizeof(char));
    scanf("%s",str);
    if (can(str)) {
        printf("%s",(char*)"YES");
    } else {
        printf("%s",(char*)"NO");
    }
    return 0;
}

#include <stdio.h>
void change(char *s, int length) {
    int i=0;
    while (i<length-1) {
        if (s[i]=='B' && s[i+1]=='G' && i!=length-1) {
            s[i]='G';
            s[i+1]='B';
            i+=2;
        } else {
            i++;
        }
    }
}
void result(char *s, int length, int iter) {
    for (int i=0; i<iter; i++) change(s,length);
}
void print(char *s) {
    while (*s) {
        printf("%c",*s);
        s++;
    }
}
int main() {
    int len,times;
    scanf("%d %d\n",&len,&times);
    char line[len+1];
    line[len]='\0';
    for (int i=0; i<len; i++) scanf("%c",&line[i]);
    result(line,len,times);
    print(line);
    return 0;
}

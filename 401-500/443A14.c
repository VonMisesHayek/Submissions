#include <stdio.h>
int read(char c) {
    return (c!=' ' && c!='{' && c!=',' && c!='}');
}
int notin(char* s, int length, char c) {
    int res=1;
    for (int i=0; i<length; i++) {
        if (s[i]==c) res=0;
    }
    return res;
}
int check(char *s, int length) {
    int count=0;
    for (int i=0; i<length; i++) {
        count+=notin(s,i,s[i]);
    }
    return count;
}
int main() {
    signed char ch;
    char s[334];
    int pos=0;
    ch=getchar();
    while (ch!=EOF) {
        if (read(ch)) {
            s[pos]=ch;
            pos++;
        }
        ch=getchar();
    }
    s[pos]='\0';
    printf("%d",check(s,pos)-1);
    return 0;
}

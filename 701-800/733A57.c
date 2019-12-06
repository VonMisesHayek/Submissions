#include <stdio.h>
int is_vowel(char ch) {
    return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y');
}
int jump(char *arr) {
    int res=0,prev=-1,pos=0;
    while (*arr) {
        if (is_vowel(*arr)) {
            if (pos-prev>res) res=pos-prev;
            prev=pos;
        }
        pos++;
        arr++;
    }
    return res*((pos-prev)<=res)+(pos-prev)*((pos-prev)>res);
}
int main() {
    char str[100];
    scanf("%s",str);
    printf("%d",jump(str));
    return 0;
}

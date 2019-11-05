#include <stdio.h>
void change(char* str, int l, int r, char e, char s) {
    for (int i=l-1; i<r; i++) {
        if (str[i]==e) str[i]=s;
    }
}
int main() {
    int len,op;
    scanf("%d %d",&len,&op);
    char word[len];
    scanf("%s",word);
    for (int i=0; i<op; i++) {
        int l,r,e,s;
        scanf("%d %d %c %c",&l,&r,&e,&s);
        change(word,l,r,e,s);
    }
    printf("%s",word);
    return 0;
}

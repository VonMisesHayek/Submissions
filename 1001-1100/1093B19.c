#include <stdio.h>
int can(char *s, int length) {
    int equal=1,pos=0;
    int least=(length>1);
    char prev=s[0];
    while (equal && pos<length) {
        if (s[pos]!=prev) equal=0;
        pos++;
    }
    return (1-equal) && least;
}
int is_palindrome(char *s, int length) {
    int lim=length/2,pos=0;
    while (pos<lim) {
        if (s[pos]!=s[length-1-pos]) return 0;
        pos++;
    }
    return 1;
}
void unequal(char *s, int length) {
    int pos=1,stop=1;
    while (pos<length && stop) {
        if (s[pos]!=s[0]) stop=0;
        pos++;
    }
    pos--;
    printf("%c",s[pos]);
    for (int i=1; i<length; i++) {
        if (i!=pos) {
            printf("%c",s[i]);
        } else {
            printf("%c",s[0]);
        }
    }
    printf("\n");
}
void print(char *s, int length) {
    if (can(s,length)) {
        if (is_palindrome(s,length)) {
            unequal(s,length);
        } else {
            printf("%s\n",s);
        }
    } else {
        printf("-1\n");
    }
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        char word[1000];
        scanf("%s",word);
        len=strlen(word);
        print(word,len);
    }
    return 0;
}

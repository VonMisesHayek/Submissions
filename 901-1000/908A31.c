#include <stdio.h>
int chtodig(char c) {
    return c-'0';
}
int isdig(int n) {
    return (n<=9 && n>=0);
}
int vow_or_odd(char c) {
    int p1=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    int p2=(chtodig(c)%2==1)&&(isdig(chtodig(c)));
    return p1||p2;
}
int flip(char *word) {
    int count=0;
    while (*word) {
        if(vow_or_odd(*word)) count++;
        word++;
    }
    return count;
}
int main() {
    char s[50];
    scanf("%s",s);
    printf("%d",flip(s));
    return 0;
}

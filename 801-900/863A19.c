#include <stdio.h>
#include <string.h>
int is_palindromic(char *str, int start, int end) {
    for (int i=start; i<end; i++) {
        if (str[i]!=str[end-1+start-i]) return 0;
    }
    return 1;
}
int index(char *str, int length) {
    int pos=length-1;
    while (str[pos]=='0') pos--;
    return pos+1;
}
int main() {
    char num[11];
    scanf("%s",num);
    int ind=index(num,strlen(num));
    if (is_palindromic(num,0,ind)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int distinct(char a, char b, char c) {
    return (a!=b && b!=c && c!=a) && !(a=='.' || b=='.' || c=='.');
}
int all(char *str, int length) {
    for (int i=1; i<length-1; i++) {
        if (distinct(str[i-1],str[i],str[i+1])) return 1;
    }
    return 0;
}
int main() {
    char land[201];
    scanf("%s",land);
    int len=strlen(land);
    if (all(land,len)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

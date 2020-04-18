#include <stdio.h>
#include <string.h>
int equidistance(char *str) {
    int links=0,pearls=0;
    while (*str) {
        if ((*str)=='-') {
            links++;
        } else {
            pearls++;
        }
        str++;
    }
    if (pearls==0) {
        return 1;
    } else {
        return (links%pearls==0);
    }
}
int main() {
    char neck[101];
    scanf("%s",neck);
    if (equidistance(neck)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

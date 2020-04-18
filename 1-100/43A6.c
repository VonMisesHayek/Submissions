#include <stdio.h>
#include <string.h>
int main() {
    int lines,gf=0,gs=0;
    char first[11]="\0",second[11]="\0",curr[11];
    scanf("%d\n",&lines);
    for (int i=0; i<lines; i++) {
        scanf("%s\n",curr);
        if (strlen(first)==0) {
            strcpy(first,curr);
            gf++;
        } else if (strlen(second)==0 && strcmp(first,curr)!=0) {
            strcpy(second,curr);
            gs++;
        } else {
            if (strcmp(first,curr)==0) gf++;
            if (strcmp(second,curr)==0) gs++;
        }
    }
    if (gf>gs) {
        printf("%s",first);
    } else {
        printf("%s",second);
    }
    return 0;
}

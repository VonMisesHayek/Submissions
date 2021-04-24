#include <stdio.h>
char month[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
void next_month(char *str, int k) {
    int now;
    for (int i=0; i<12; i++) {
        if (strcmp(str,month[i])==0) now=i;
    }
    now=(now+k)%12;
    printf("%s",month[now]);
}
int main() {
    char curr[20]; int k; scanf("%s\n%d",curr,&k);
    next_month(curr,k);
    return 0;
}

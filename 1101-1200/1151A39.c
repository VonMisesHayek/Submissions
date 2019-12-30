#include <stdio.h>
#include <stdlib.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int roll(char x, char y) {
    return min(abs(x-y),26-abs(x-y));
}
int operations(char *str, int length) {
    int res=10000,temp;
    char compare[]="ACTG";
    for (int i=0; i<length-3; i++) {
        temp=0;
        for (int j=0; j<4; j++) {
            temp+=roll(str[i+j],compare[j]);
        }
        if (res>temp) res=temp;
    }
    return res;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char gene[len+1];
    scanf("%s",gene);
    printf("%d",operations(gene,len));
    return 0;
}

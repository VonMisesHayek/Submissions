#include <stdio.h>
#define max_size 101
int erase(char *str) {
    int res=0,acc=0,first=0;
    while (*str) {
        if (*str=='1') {
            if (first==0) {
                first=1;
            } else {
                res+=acc;
            }
            acc=0;
        } else {
            acc++;
        }
        str++;
    }
    return res;
}
int main() {
    int queries;
    scanf("%d\n",&queries);
    char s[max_size];
    for (int i=0; i<queries; i++) {
        scanf("%s\n",s);
        printf("%d\n",erase(s));
    }
    return 0;
}

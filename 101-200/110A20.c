#include <stdio.h>
int is_lucky(int n) {
    int it=n;
    int res=1;
    while (it>0) {
        if ((it%10)!=4 && (it%10)!=7) res=0;
        it=it/10;
    }
    return (res && n>0);
}
int luckychar(char c) {
    return (c=='7' || c=='4');
}
int nearly(char* c) {
    int count=0;
    while (*c) {
        count+=luckychar(*c);
        c++;
    }
    return is_lucky(count);
}
int main() {
    char num[19];
    scanf("%s",num);
    if (nearly(num)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

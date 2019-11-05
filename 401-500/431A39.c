#include <stdio.h>
int conv (char c) {
    return c-'1';
}
int main() {
    int cals[4];
    signed char ch;
    int sum=0;
    for (int i=0; i<4; i++) scanf("%d",&cals[i]);
    ch=getchar();
    while (ch!=EOF) {
        sum+=cals[conv(ch)];
        ch=getchar();
    }
    printf("%d",sum);
    return 0;
}

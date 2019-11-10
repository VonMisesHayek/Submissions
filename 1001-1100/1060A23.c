#include <stdio.h>
int min(int x, int y) {
    if (x<=y) {
        return x;
    } else {
        return y;
    }
}
int ways(char *s, int length) {
    int eights=0;
    while(*s) {
        if (*s=='8') eights++;
        s++;
    }
    return min(eights,length/11);
}
int main() {
    int len;
    scanf("%d\n",&len);
    char numbers[len];
    scanf("%s",numbers);
    printf("%d",ways(numbers,len));
    return 0;
}

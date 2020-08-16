#include <stdio.h>
void remember(char *str, int length) {
    int l=length/2;
    for (int i=0; i<l-1; i++) printf("%c%c-",str[2*i],str[2*i+1]);
    if (length%2==0) {
        printf("%c%c",str[2*l-2],str[2*l-1]);
    } else {
        printf("%c%c%c",str[2*l-2],str[2*l-1],str[2*l]);
    }
}
int main() {
    int len;
    scanf("%d\n",&len);
    char number[len+1];
    scanf("%s",number);
    remember(number,len);
    return 0;
}

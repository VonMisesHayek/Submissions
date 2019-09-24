#include <stdio.h>
#include <string.h>
int main() {
    int test_cases;
    char string[100];
    scanf("%d",&test_cases);
    for (int i=0; i<test_cases; i++) {
        scanf("%s",string);
        int len=strlen(string);
        if (len>10) {
            printf("%c%d%c\n",string[0],len-2,string[len-1]);
        } else {
            printf("%s\n",string);
        }
    }
    return 0;
}

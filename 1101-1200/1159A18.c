#include <stdio.h>
int main() {
    int ops,end=0;
    char ch;
    scanf("%d\n",&ops);
    for (int i=0; i<ops; i++) {
        scanf("%c",&ch);
        if (ch=='+') {
            end++;
        } else {
            if (end>0) end--;
        }
    }
    printf("%d",end);
    return 0;
}

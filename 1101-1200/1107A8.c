#include <stdio.h>
int can_divide(char *str, int length) {
    return !(length==2 && str[0]>=str[1]);
}
void divide(char *str, int length) {
    printf("2\n%c ",str[0]);
    for (int i=1; i<length; i++) printf("%c",str[i]);
    printf("\n");
}
int main() {
    int queries,len;
    char number[301];
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n%s\n",&len,number);
        if (can_divide(number,len)) {
            printf("YES\n");
            divide(number,len);
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

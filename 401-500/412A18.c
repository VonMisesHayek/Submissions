#include <stdio.h>
int near(int n, int k) {
    if (2*k<=n) {
        return 1;
    } else {
        return n;
    }
}
void instructions(int n, int *k, char *str) {
    if (n==near(n,*k)) {
        while ((*k)<n) {
            (*k)++;
            printf("RIGHT\n");
        }
        for (int i=n-1; i>0; i--) printf("PRINT %c\nLEFT\n",str[i]);
        printf("PRINT %c",str[0]);
    } else {
        while ((*k)>1) {
            (*k)--;
            printf("LEFT\n");
        }
        for (int i=0; i<n-1; i++) printf("PRINT %c\nRIGHT\n",str[i]);
        printf("PRINT %c",str[n-1]);
    }
}
int main() {
    int len,pos;
    char slog[101];
    scanf("%d %d\n%s",&len,&pos,slog);
    instructions(len,&pos,slog);
    return 0;
}

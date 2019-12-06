#include <stdio.h>
long coder(int n) {
    if (n%2==0) {
        return (n/2)*n;
    } else {
        return (n*n)/2+1;
    }
}
void board(int n) {
    if (n==1) {
        printf("C");
    } else {
        char line[n],ch1='C',ch2='.';
        for (int i=0; i<n-1; i++) {
            if (i%2==0) {
                line[i]='C';
            } else {
                line[i]='.';
            }
        }
        line[n-1]='\0';
        if (n%2==0) {
            for (int i=0; i<n; i++) {
                if (i%2==0) {
                    printf("%s%c\n",line,ch2);
                } else {
                    printf("%c%s\n",ch2,line);
                }
            }
        } else {
            for (int i=0; i<n; i++) {
                if (i%2==0) {
                    printf("%s%c\n",line,ch1);
                } else {
                    printf("%c%s\n",ch2,line);
                }
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld\n",coder(n));
    board(n);
    return 0;
}

#include <stdio.h>
void read(char *arr, long length) {
    for (long i=0; i<length; i++) scanf("%c",(arr+i));
}
long pay(char *arr, long length) {
    long res=0,x=0,y=0;
    int kingdom=0;
    for (long i=0; i<length; i++) {
        if (*(arr+i)=='U') {
            x++;
        } else {
            y++;
        }
        if (x>y && kingdom==2) {
            kingdom=1;
            res++;
        } else if (x<y && kingdom==1) {
            kingdom=2;
            res++;
        } else if (i==0) {
            if (x>y) {
                kingdom=1;
            } else if (x<y) {
                kingdom=2;
            }
        }
    }
    return res;
}
int main() {
    long len;
    scanf("%ld\n",&len);
    char moves[len];
    read(moves,len);
    printf("%ld",pay(moves,len));
    return 0;
}

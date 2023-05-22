#include <stdio.h>
int dig(int n, int pos) {
    for (int i=0; i<pos; i++) n/=10;
    return n%10;
}
int find_digit(int n) {
    int curr=1,pos=1;
    while (pos<n) {
        curr++;
        if (curr<10) {
            pos++;
        } else if (curr<100) {
            pos+=2;
        } else if (curr<1000) {
            pos+=3;
        } else if (curr<10000) {
            pos+=4;
        }
    }
    return dig(curr,pos-n);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",find_digit(n));
    return 0;
}

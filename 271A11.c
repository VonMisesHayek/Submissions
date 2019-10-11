#include <stdio.h>
int diff(int year) {
    int aux=year;
    int digits[5];
    int pos=0;
    int is_diff=1;
    while(aux>0) {
        digits[pos]=aux%10;
        pos++;
        aux=aux/10;
    }
    for (int i=0; i<pos-1; i++) {
        for (int j=i+1; j<pos; j++) {
            if (digits[i]==digits[j]) is_diff=0;
        }
    }
    return is_diff;
}
int next(int year) {
    int res=year+1;
    while(diff(res)==0) {
        res++;
    }
    return res;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",next(n));
    return 0;
}

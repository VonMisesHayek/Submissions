#include <stdio.h>
int digit_sum(int n) {
    int res=0;
    while (n>0) {
        res+=n%10;
        n/=10;
    }
    return res;
}
int times(long s) {
    if (s==0) return 0;
    int res=1;
    while (s>=10) {
        res++;
        s=digit_sum(s);
    }
    return res;
}
int main() {
    char ch;
    long sum=0,count=0;
    while ((ch=getchar())!=EOF) {
        if ('0'<=ch && ch<='9') {
            sum+=(ch-'0');
            count++;
        }
    }
    (count==1) ? printf("0"):printf("%d",times(sum));
    return 0;
}

#include <stdio.h>
int wrong(int n, int k) {
    int res=n;
    for (int i=0; i<k; i++) {
        if (res%10==0) {
            res=res/10;
        } else {
            res--;
        }
    }
    return res;
}
int main() {
    int number, times;
    scanf("%d %d",&number,&times);
    printf("%d",wrong(number,times));
    return 0;
}

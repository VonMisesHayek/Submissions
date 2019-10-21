#include <stdio.h>
#include <string.h>
int is_lucky(int n) {
    int a=n;
    int res=1;
    while (a>0 && res==1) {
        if (a%10!=4 && a%10!=7) res=0;
        a=a/10;
    }
    return res;
}
int is_div(int n) {
    int lim=n/2;
    for (int i=1; i<=lim; i++) {
        if (n%i==0 && is_lucky(i)==1) return 1;
    }
    if (is_lucky(n)==1) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if (is_div(n)==1) {
        printf("%s",(char*)"YES");
    } else {
        printf("%s",(char*)"NO");
    }
    return 0;
}

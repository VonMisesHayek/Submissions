#include <stdio.h>
typedef long long ll;
ll decode(char *s, int length) {
    int curr=0;
    ll res=0,power=1;
    for (int i=length-1; i>=0; i--) {
        if (s[i]=='0') {
            res+=power*curr;
            power*=10;
            curr=0;
        } else if (i>0) {
            curr++;
        } else {
            res+=power*(curr+1);
        }
    }
    return res;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char s[len+1];
    scanf("%s",s);
    printf("%I64d",decode(s,len));
    return 0;
}

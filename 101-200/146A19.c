#include <stdio.h>
int is_lucky(char *num, int length) {
    int total=0,partial=0;
    char curr;
    for (int i=0; i<length; i++) {
        curr=num[i];
        if (curr!='4' && curr!='7') return 0;
        if (2*i<length) partial+=(num[i]-'0');
        total+=(num[i]-'0');
    }
    return (2*partial==total);
}
int main() {
    int len;
    scanf("%d\n",&len);
    char num[len+1];
    scanf("%s",num);
    if(is_lucky(num,len)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

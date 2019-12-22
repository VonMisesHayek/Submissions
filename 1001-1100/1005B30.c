#include <stdio.h>
#include <string.h>
long min(long x, long y) {
    if (x<=y) {
        return x;
    } else {
        return y;
    }
}
long left_delete(char *str1, char *str2, long len1, long len2) {
    long lim=min(len1,len2),pos=0,count=0;
    int flag=1;
    while (pos<lim && flag) {
        if (str1[len1-1-pos]==str2[len2-1-pos]) {
            count++;
        } else {
            flag=0;
        }
        pos++;
    }
    return (len1+len2-2*count);
}
int main() {
    char first[200001],second[200001];
    scanf("%s\n%s",first,second);
    int len1=strlen(first),len2=strlen(second);
    printf("%ld",left_delete(first,second,len1,len2));
    return 0;
}

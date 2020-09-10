#include <stdio.h>
void scan(char *arr, long length) {
    for (long i=0; i<length; i++) scanf("%c",(arr+i));
}
void change(char *str, long length, long k) {
    long count=0,pos=1;
    if (str[0]>'1' && k>0) {
        str[0]='1';
        count++;
    }
    while (count<k && pos<length) {
        if (str[pos]>'0') {
            str[pos]='0';
            count++;
        }
        pos++;
    }
    if (length==1 && k>0) str[0]='0';
}
void print(char *arr, long length) {
    for (long i=0; i<length; i++) printf("%c",*(arr+i));
}
int main() {
    long len,k;
    scanf("%ld %ld\n",&len,&k);
    char s[len]; scan(s,len);
    change(s,len,k);
    print(s,len);
    return 0;
}

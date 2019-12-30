#include <stdio.h>
#include <string.h>
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) *(arr+i)=1;
}
int check(char *str, char *quit, int index, int len) {
    for (int i=0; i<len; i++) {
        if (str[i+index]!=quit[i]) return 0;
    }
    return 1;
}
void original(char *str, char *quit, int length) {
    int sieve[length],len=strlen(quit),l=length-len+1,pos=0,flag=0;
    initialize(sieve,length);
    for (int i=0; i<l; i++) {
        if (check(str,quit,i,len)) {
            for (int j=0; j<len; j++) sieve[i+j]=0;
        }
    }
    while (pos<length) {
        if (sieve[pos]) {
            printf("%c",str[pos]);
            flag=1;
        } else if (flag==1) {
            printf(" ");
            flag=0;
        }
        pos++;
    }
}
int main() {
    char word[201],avoid[]="WUB";
    scanf("%s",word);
    int len=strlen(word);
    original(word,avoid,len);
    return 0;
}

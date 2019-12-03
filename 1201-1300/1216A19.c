#include <stdio.h>
int main() {
    long len,count=0;
    scanf("%ld\n",&len);
    long lim=len/2;
    char word[len];
    scanf("%s",word);
    for (long i=0; i<lim; i++) {
        if (word[2*i]==word[2*i+1]) {
            count++;
            if (word[2*i]=='a') {
                word[2*i]='b';
            } else {
                word[2*i]='a';
            }
        }
    }
    printf("%ld\n",count);
    printf("%s",word);
    return 0;
}

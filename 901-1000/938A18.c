#include <stdio.h>
int isvow(char c) {
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}
void corr(char *arr, int length) {
    int sieve[length];
    int aux[length];
    for (int i=0; i<length; i++) {
        sieve[i]=isvow(arr[i]);
        if (i>0 && sieve[i-1]==1) {
            if (sieve[i]) {
                aux[i]=-1;
            } else {
                aux[i]=0;
            }
        } else {
            aux[i]=sieve[i];
        }
    }
    for (int i=0; i<length; i++) {
        if (aux[i]>=0) printf("%c",arr[i]);
    }
}
int main() {
    int len;
    scanf("%d\n",&len);
    char word[len];
    scanf("%s",word);
    corr(word,len);
    return 0;
}

#include <stdio.h>
#include <string.h>
#define ABC 26
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) *(arr+i)=1;
}
void print(int *arr, int length) {
    for (int i=0; i<length; i++) printf("%d",*(arr+i));
    printf("\n");
}
void solution(int *arr, int length) {
    for (int i=0; i<length; i++) {
        if (arr[i]<1) printf("%c",i+'a');
    }
    printf("\n");
}
void fill(char *str, int length) {
    int sieve[ABC],pos=0,step;
    initialize(sieve,ABC);
    while (pos<length) {
        step=0;
        while ((pos+step)<length && str[pos]==str[pos+step]) step++;
        if (step%2==0) {
            sieve[str[pos]-'a']++;
        } else {
            sieve[str[pos]-'a']=-999;
        }
        pos+=step;
    }
    solution(sieve,ABC);
}
int main() {
    int queries,len;
    char word[500];
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%s",word);
        len=strlen(word);
        fill(word,len);
    }
    return 0;
}

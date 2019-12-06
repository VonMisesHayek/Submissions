#include <stdio.h>
#define ABC 26
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
void print(char *str, int start, int end) {
    for (int i=start; i<end; i++) printf("%c",str[i]);
}
int check(int *arr, int length, int bound) {
    for (int i=0; i<length; i++) {
        if (arr[i]>bound) return 0;
    }
    return 1;
}
int is_diverse(char *str, int start, int end) {
    int sieve[ABC],lim=(end-start)/2;
    initialize(sieve,ABC);
    for (int i=start; i<end; i++) sieve[str[i]-'a']++;
    return check(sieve,ABC,lim);
}
int div_substring(char *str, int length) {
    for (int i=0; i<length; i++) {
        for (int j=i+1; j<=length; j++) {
            if (is_diverse(str,i,j)) {
                printf("YES\n");
                print(str,i,j);
                return 1;
            }
        }
    }
    printf("NO");
}
int main() {
    int len;
    scanf("%d\n",&len);
    char word[len];
    scanf("%s",word);
    div_substring(word,len);
    return 0;
}

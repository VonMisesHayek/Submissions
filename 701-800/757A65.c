#include <stdio.h>
int is_upper(char ch) {
    return ('A'<=ch && ch<='Z');
}
void print(int *arr, int length) {
    for (int i=0; i<length; i++) printf("%d",arr[i]);
}
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
void rep(char *arr, int *res) {
    while (*arr) {
        if (is_upper(*arr)) {
            res[*arr-'A'+26]++;
        } else {
            res[*arr-'a']++;
        }
        arr++;
    }
}
int pick(int *arr, int *rep, int length) {
    long min=100000;
    for (int i=0; i<length; i++) {
        if (rep[i]!=0 && min>arr[i]/rep[i]) min=arr[i]/rep[i];
    }
    return min;
}
int main() {
    signed char curr;
    char word[]="Bulbasaur";
    int sieve[52],representative[52];
    initialize(sieve,52);
    initialize(representative,52);
    rep(word,representative);
    while ((curr=getchar())!=EOF) {
        if (is_upper(curr)) {
            sieve[curr-'A'+26]++;
        } else {
            sieve[curr-'a']++;
        }
    }
    printf("%d",pick(sieve,representative,52));
    return 0;
}

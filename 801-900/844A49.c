#include <stdio.h>
#include <string.h>
#define ABC 26
#define rep(i,a,b) for (int i=a; i<b; i++)
void initialize(int *arr, int length) {
    rep (i,0,length) *(arr+i)=0;
}
int min(int x, int y) {
    return (x<=y) ? x:y;
}
int max(int x, int y) {
    return (x>=y) ? x:y;
}
int change(char *str, int k) {
    int sieve[ABC],len=strlen(str),different=0; initialize(sieve,ABC);
    if (len<k) return -1;
    rep (i,0,len) sieve[str[i]-'a']++;
    rep (i,0,ABC) different+=(sieve[i]>0);
    return max(k-different,0);
}
int main() {
    char word[1001];
    int diff;
    scanf("%s\n%d",word,&diff);
    int save=change(word,diff);
    if (save==-1) {
        printf("impossible");
    } else {
        printf("%d",save);
    }
    return 0;
}

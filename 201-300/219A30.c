#include <stdio.h>
#include <string.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define ABC 26
void initialize(int *arr, int length) {
    rep (i,0,length) arr[i]=0;
}
void fill(char *str, int *sieve) {
    while (*str) {
        sieve[*str-'a']++;
        str++;
    }
}
void kstring(int *str, int k) {
    int len=strlen(str),freq[ABC],rel[ABC];
    initialize(freq,ABC);
    fill(str,freq);
    rep (i,0,ABC) {
        if (freq[i]%k!=0) {
            printf("-1");
            return;
        }
    }
    rep (i,0,ABC) rel[i]=freq[i]/k;
    rep (i,0,k) {
        rep (j,0,ABC) {
            rep (l,0,rel[j]) printf("%c",'a'+j);
        }
    }
}
int main() {
    int k;
    char s[1001];
    scanf("%d\n%s",&k,s);
    kstring(s,k);
    return 0;
}

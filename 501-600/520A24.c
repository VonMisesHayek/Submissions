#include <stdio.h>
int conv(char c) {
    if (c>='A' && c<='Z') {
        return c-'A';
    } else {
        return c-'a';
    }
}
int check(int *arr, int length) {
    int res=1,pos=0;
    while (res && pos<length) {
        if (arr[pos]==0) res=0;
        pos++;
    }
    return res;
}
int main() {
    int len;
    int sieve[26];
    signed char ch;
    scanf("%d\n",&len);
    for (int i=0; i<26; i++) sieve[i]=0;
    while ((ch=getchar())!=EOF) {
        sieve[conv(ch)]=1;
    }
    if (check(sieve,26)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
int check(int *crib, int length, int friends) {
    int val=1,pos=0;
    while (val && pos<length) {
        if (crib[pos]>friends) val=0;
        pos++;
    }
    return val;
}
int main() {
    int ball,frie;
    int sieve[26];
    char curr;
    for (int i=0; i<26; i++) sieve[i]=0;
    scanf("%d %d\n",&ball,&frie);
    for (int i=0; i<ball; i++) {
        scanf("%c",&curr);
        sieve[curr-'a']++;
    }
    if (check(sieve,26,frie)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

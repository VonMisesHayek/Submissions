#include <stdio.h>
int check(int *crib) {
    int first=0,last=25,keep=1,flag=1;
    while (first<26 && keep) {
        if (crib[first]>0) {
            keep=0;
        } else {
            first++;
        }
    }
    while (last>-1 && flag) {
        if (crib[last]>0) {
            flag=0;
        } else {
            last--;
        }
    }
    for (int i=first; i<=last; i++) {
        if (crib[i]!=1) return 0;
    }
    return 1;
}
int dive(char *word) {
    int sieve[26];
    for (int i=0; i<26; i++) sieve[i]=0;
    while (*word) {
        sieve[*word-'a']++;
        word++;
    }
    return check(sieve);
}
int main() {
    int queries;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        char s[100];
        scanf("%s",s);
        if (dive(s)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}

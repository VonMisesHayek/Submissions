#include <stdio.h>
int can(char *s, char *p, char *r) {
    int sieve[26],crib[26],keep=1,pos=0;
    for (int i=0; i<26; i++) {
        sieve[i]=0;
        crib[i]=0;
    }
    while (*s) {
        sieve[*s-'A']++;
        s++;
    }
    while (*p) {
        sieve[*p-'A']++;
        p++;
    }
    while (*r) {
        crib[*r-'A']++;
        r++;
    }
    while (pos<26 && keep) {
        if (sieve[pos]!=crib[pos]) keep=0;
        pos++;
    }
    return keep;
}
int main() {
    char first[100],second[100],perm[100];
    scanf("%s\n%s\n%s",first,second,perm);
    if (can(first,second,perm)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

#include <stdio.h>
int can(char *arr, int *crib, int length) {
    if (length==1) return 1;
    while (*arr) {
        crib[*arr-'a']++;
        arr++;
    }
    for (int i=0; i<26; i++) {
        if (crib[i]>=2) return 1;
    }
    return 0;
}
int main() {
    int pups;
    scanf("%d\n",&pups);
    char dogs[pups];
    int sieve[26];
    for (int i=0; i<pups; i++) scanf("%c",&dogs[i]);
    for (int i=0; i<26; i++) sieve[i]=0;
    if (can(dogs,sieve,pups)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

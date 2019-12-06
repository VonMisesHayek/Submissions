#include <stdio.h>
#define ABC 26
void initialize(long *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
long changes(long *arr, int length, long len) {
    if (len>26) return -1;
    long res=0;
    for (int i=0; i<length; i++) {
        if (arr[i]>1) res+=(arr[i]-1);
    }
    return res*(res<26)-(res>=26);
}
int main() {
    long len,hist[ABC];
    char curr;
    initialize(hist,ABC);
    scanf("%ld\n",&len);
    for (long i=0; i<len; i++) {
        scanf("%c",&curr);
        hist[curr-'a']++;
    }
    printf("%ld",changes(hist,ABC,len));
    return 0;
}

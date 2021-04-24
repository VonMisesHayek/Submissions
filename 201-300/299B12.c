#include <stdio.h>
int can_reach(long n, long k) {
    char curr;
    long rocks=0,pos=0;
    while (pos<n && rocks<k) {
        scanf("%c",&curr);
        if (curr=='#') {
            rocks++;
        } else {
            rocks=0;
        }
        if (rocks==k) return 0;
        pos++;
    }
    return 1;
}
int main() {
    long len,jump;
    scanf("%ld %ld\n",&len,&jump);
    (can_reach(len,jump)) ? printf("YES"):printf("NO");
    return 0;
}

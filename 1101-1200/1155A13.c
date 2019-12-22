#include <stdio.h>
int reverse(long length, long *save1, long *save2) {
    char max='a',curr;
    long maxpos=0;
    for (long i=0; i<length; i++) {
        scanf("%c",&curr);
        if (max>curr) {
            *save1=maxpos;
            *save2=i+1;
            return 1;
        } else {
            maxpos=i+1;
            max=curr;
        }
    }
    return 0;
}
int main() {
    long len,pos1,pos2;
    scanf("%ld\n",&len);
    if(reverse(len,&pos1,&pos2)) {
        printf("YES\n%ld %ld",pos1,pos2);
    } else {
        printf("NO");
    }
    return 0;
}

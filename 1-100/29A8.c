#include <stdio.h>
int mutual(long *arro, long *arrt, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arrt[i]==arro[j] && arrt[j]==arro[i]) return 1;
        }
    }
    return 0;
}
int main() {
    int len;
    scanf("%d\n",&len);
    long camel[len],spit[len],curr;
    for (int i=0; i<len; i++) {
        scanf("%ld %ld\n",&camel[i],&curr);
        spit[i]=camel[i]+curr;
    }
    if (mutual(camel,spit,len)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

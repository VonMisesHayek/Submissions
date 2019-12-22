#include <stdio.h>
#include <stdlib.h>
int twist(char *str, int length) {
    int lim=(length+1)/2,diff;
    for (int i=0; i<lim; i++) {
        diff=abs(str[i]-str[length-1-i]);
        if (diff>2 || diff==1) return 0;
    }
    return 1;
}
int main() {
    int queries,len;
    char word[100];
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d",&len);
        scanf("%s",word);
        if (twist(word,len)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

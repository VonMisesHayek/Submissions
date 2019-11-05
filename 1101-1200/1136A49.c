#include <stdio.h>
int main() {
    int chap,bookmark;
    scanf("%d\n",&chap);
    int pages[chap];
    for (int i=0; i<chap; i++) {
        int l,r;
        scanf("%d %d\n",&l,&r);
        pages[i]=l;
    }
    scanf("%d",&bookmark);
    int i=0;
    while (i<chap && bookmark>=pages[i]) {
        i++;
    }
    printf("%d",chap-i+1);
    return 0;
}

#include <stdio.h>
void word(int length, int alpha) {
    int lim=length/alpha;
    int rem=length%alpha;
    for (int i=0; i<alpha; i++) {
        for (int j=0; j<lim; j++) printf("%c",i+'a');
    }
    for (int j=0; j<rem; j++) printf("%c",alpha-1+'a');
    printf("\n");
}
int main() {
    int quer,n,k;
    scanf("%d\n",&quer);
    for (int i=0; i<quer; i++) {
        scanf("%d %d\n",&n,&k);
        word(n,k);
    }
    return 0;
}

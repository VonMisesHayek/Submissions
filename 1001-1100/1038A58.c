#include <stdio.h>
int conv(char ch) {
    return ch-'A';
}
void fill(int *c, char ch) {
    c[conv(ch)]+=1;
}
int min(int *c, int length) {
    int res=c[0];
    for (int i=1; i<length; i++) {
        if (c[i]<res) res=c[i];
    }
    return res;
}
int main() {
    int len,alpha;
    char ch;
    scanf("%d %d\n",&len,&alpha);
    int counts[alpha];
    for (int i=0; i<alpha; i++) counts[i]=0;
    for (int i=0; i<len; i++) {
        scanf("%c",&ch);
        fill(counts,ch);
    }
    printf("%d",alpha*min(counts,alpha));
    return 0;
}

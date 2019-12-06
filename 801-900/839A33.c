#include <stdio.h>
#define MAXGIVE 8
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int main() {
    int len,candy,curr,bran=0,saved=0,i=0,keep=1,dar;
    scanf("%d %d\n",&len,&candy);
    while (i<len && keep) {
        scanf("%d",&curr);
        dar=min(curr+saved,MAXGIVE);
        bran+=dar;
        saved=(curr+saved-dar);
        if (bran>=candy) {
            keep=0;
            printf("%d",i+1);
        }
        i++;
    }
    if (keep) printf("-1");
    return 0;
}

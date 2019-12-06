#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int mg(int x, int y) {
    int two=min(x,y);
    return two+(y-two)/3;
}
int main() {
    int groups,pair=0,single=0,curr;
    scanf("%d\n",&groups);
    for (int i=0; i<groups; i++) {
        scanf("%d",&curr);
        if (curr==1) {
            single++;
        } else {
            pair++;
        }
    }
    printf("%d",mg(pair,single));
    return 0;
}

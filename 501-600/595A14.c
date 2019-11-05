#include <stdio.h>
int main() {
    int floors,flats;
    int count=0;
    scanf("%d %d\n",&floors,&flats);
    for (int i=0; i<floors; i++) {
        for (int j=0; j<flats; j++) {
            int left,right;
            scanf("%d %d",&left,&right);
            if (left || right) count++;
        }
    }
    printf("%d",count);
    return 0;
}

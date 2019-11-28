#include <stdio.h>
int main() {
    int chores,acc,x,times=0,curr;
    scanf("%d %d %d\n",&chores,&acc,&x);
    for (int i=0; i<chores-acc; i++) {
        scanf("%d",&curr);
        times+=curr;
    }
    times+=acc*x;
    printf("%d",times);
    return 0;
}

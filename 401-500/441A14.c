#include <stdio.h>
int main() {
    int sellers,item,count=0,can;
    long money,curr;
    scanf("%d %ld\n",&sellers,&money);
    int deal[sellers];
    for (int i=0; i<sellers; i++) {
        can=0;
        scanf("%d",&item);
        for (int j=0; j<item; j++) {
            scanf("%ld",&curr);
            if (curr<money) can=1;
        }
        scanf("\n");
        deal[i]=can;
        count+=can;
    }
    printf("%d\n",count);
    for (int i=0; i<sellers; i++) {
        if (deal[i]) printf("%d ",i+1);
    }
    return 0;
}

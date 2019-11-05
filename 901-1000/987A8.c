#include <stdio.h>
int main() {
    int gems;
    int fill[]={0,0,0,0,0,0};
    scanf("%d",&gems);
    for (int i=0; i<gems; i++) {
        char curr[10];
        scanf("%s",curr);
        if (curr[0]=='p') {
            fill[0]=1;
        } else if (curr[0]=='g') {
            fill[1]=1;
        } else if (curr[0]=='b') {
            fill[2]=1;
        } else if (curr[0]=='o') {
            fill[3]=1;
        } else if (curr[0]=='r') {
            fill[4]=1;
        } else if (curr[0]=='y') {
            fill[5]=1;
        }
    }
    printf("%d\n",6-gems);
    if (fill[0]==0) {
        printf("%s",(char*)"Power\n");
    }
    if (fill[1]==0) {
        printf("%s",(char*)"Time\n");
    }
    if (fill[2]==0) {
        printf("%s",(char*)"Space\n");
    }
    if (fill[3]==0) {
        printf("%s",(char*)"Soul\n");
    }
    if (fill[4]==0) {
        printf("%s",(char*)"Reality\n");
    }
    if (fill[5]==0) {
        printf("%s",(char*)"Mind\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int quer,low,high,outscored=0;
    scanf("%d\n",&quer);
    char row[10];
    for (int i=0; i<quer; i++) {
        scanf("%s %d %d",row,&low,&high);
        if (high>low && low>=2400) outscored=1;
    }
    if (outscored) {
        printf("%s",(char*)"YES");
    } else {
        printf("NO");
    }
    return 0;
}

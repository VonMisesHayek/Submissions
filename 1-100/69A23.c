#include <stdio.h>
#include <string.h>
int main() {
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if (sum1==0 && sum2==0 && sum3==0) {
        printf("%s",(char*)"YES");
    } else {
        printf("%s",(char*)"NO");
    }
    return 0;
}

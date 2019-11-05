#include <stdio.h>
int main() {
    int len;
    int count=0;
    scanf("%d",&len);
    int stairs[len];
    int cant[len];
    int j=0;
    for (int i=0; i<len; i++) {
        int curr;
        scanf("%d",&curr);
        stairs[i]=curr;
        if (curr==1) {
            count++;
        }
        if (i>0 && curr==1) {
            cant[j]=stairs[i-1];
            j++;
        }
        if (i==len-1) {
            cant[j]=stairs[i];
            j++;
        }
    }
    printf("%d\n",count);
    for (int i=0; i<j; i++) {
        printf("%d ",cant[i]);
    }
    return 0;
}

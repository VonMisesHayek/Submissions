#include <stdio.h>
int maxpos(int* arr, int len) {
    int max=0;
    int pos=0;
    for (int i=0; i<len; i++) {
        if (max<arr[i]) {
            max=arr[i];
            pos=i;
        }
    }
    return pos;
}
int main() {
    int ex;
    int musc[3]={0,0,0};
    scanf("%d",&ex);
    for (int i=0; i<ex; i++) {
        int curr;
        scanf("%d",&curr);
        musc[i%3]+=curr;
    }
    int pos=maxpos(musc,3);
    if (pos==0) {
        printf("%s",(char*)"chest");
    } else if (pos==1) {
        printf("%s",(char*)"biceps");
    } else {
        printf("%s",(char*)"back");
    }
    return 0;
}

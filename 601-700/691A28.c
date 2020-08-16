#include <stdio.h>
void scan(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
int fast(int *arr, int length) {
    int count=0;
    for (int i=0; i<length; i++) count+=(arr[i]==0);
    if (length==1 && count==0) {
        return 1;
    } else if (length>1 && count==1) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int len;
    scanf("%d\n",&len);
    int jacket[len];
    scan(jacket,len);
    if (fast(jacket,len)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

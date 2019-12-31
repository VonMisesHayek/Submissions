#include <stdio.h>
#include <stdlib.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void reconnaissance(int *arr, int length, int *poso, int *post) {
    int min=1001,comp;
    for (int i=0; i<length-1; i++) {
        comp=abs(arr[i]-arr[i+1]);
        if (comp<min) {
            min=comp;
            *poso=i+1;
            *post=i+2;
        }
    }
    comp=abs(arr[0]-arr[length-1]);
    if (comp<min) {
        *poso=length;
        *post=1;
    }
}
int main() {
    int len,a,b;
    scanf("%d\n",&len);
    int height[len];
    read(height,len);
    reconnaissance(height,len,&a,&b);
    printf("%d %d",a,b);
    return 0;
}

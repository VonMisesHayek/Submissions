#include <stdio.h>
int tri(int *arr, int length) {
    int love=0,pos=0;
    while (love==0 && pos<length) {
        if (pos==arr[arr[arr[pos]-1]-1]-1) love=1;
        pos++;
    }
    return love;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int planes[len];
    for (int i=0; i<len; i++) scanf("%d",&planes[i]);
    if (tri(planes,len)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

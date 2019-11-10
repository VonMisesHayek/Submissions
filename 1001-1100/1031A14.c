#include <stdio.h>
int gild(int h, int w, int k) {
    if (k==0) {
        return 0;
    } else {
        return 2*h+2*w-4+gild(h-4,w-4,k-1);
    }
}
int main() {
    int height,width,rings;
    scanf("%d %d %d",&height,&width,&rings);
    printf("%d",gild(height,width,rings));
    return 0;
}

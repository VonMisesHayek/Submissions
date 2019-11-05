#include <stdio.h>
#include <math.h>
int turns(char in, char op) {
    int dist=abs(op-in);
    if (dist<6) {
        return dist;
    } else {
        return 10-dist;
    }
}
int total(char *arr1, char *arr2) {
    int count=0;
    while (*arr1) {
        count+=turns(*arr1,*arr2);
        arr2++;
        arr1++;
    }
    return count;
}
int main() {
    int len;
    scanf("%d\n",&len);
    char init[len],open[len];
    scanf("%s\n%s",init,open);
    printf("%d",total(init,open));
    return 0;
}

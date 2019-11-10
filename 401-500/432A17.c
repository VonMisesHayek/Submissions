#include <stdio.h>
int teams(int *arr, int length, int k) {
    int count=0;
    for (int i=0; i<length; i++) {
        if (arr[i]+k<=5) count++;
    }
    return count/3;
}
int main() {
    int len, least;
    scanf("%d %d\n",&len,&least);
    int times[len];
    for (int i=0; i<len; i++) scanf("%d",&times[i]);
    printf("%d",teams(times,len,least));
    return 0;
}

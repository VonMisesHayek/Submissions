#include <stdio.h>
int shortest(int* arr, int length, int go, int come) {
    int sum=0,path=0;
    for (int i=0; i<length; i++) sum+=arr[i];
    if (go<=come) {
        for (int i=go-1; i<come-1; i++) path+=arr[i];
    } else {
        for (int i=come-1; i<go-1; i++) path+=arr[i];
    }
    if (2*path<=sum) {
        return path;
    } else {
        return sum-path;
    }
}
int main() {
    int len,start,end;
    scanf("%d\n",&len);
    int dist[len];
    for (int i=0; i<len; i++) scanf("%d",&dist[i]);
    scanf("%d %d",&start,&end);
    printf("%d",shortest(dist,len,start,end));
    return 0;
}

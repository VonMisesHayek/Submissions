#include <stdio.h>
int sum(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) res+=arr[i];
    return res;
}
int valid(int *in, int *out, int length) {
    return (sum(in,length)>=sum(out,length));
}
int main() {
    int len;
    scanf("%d\n",&len);
    int first[len],last[len];
    for (int i=0; i<len; i++) scanf("%d",&first[i]);
    for (int i=0; i<len; i++) scanf("%d",&last[i]);
    if (valid(first,last,len)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

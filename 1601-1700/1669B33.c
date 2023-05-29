#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int cmp(const void *a, const void *b) {
    return *(int *)a-*(int *)b;
}
int triple(int *arr, int length) {
    int pos=1,count=1,prev=arr[0];
    while (pos<length) {
        if (prev!=arr[pos]) {
            prev=arr[pos];
            count=1;
        } else {
            count++;
        }
        if (count==3) return prev;
        pos++;
    }
    return -1;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int nums[len]; read(nums,len);
        qsort(nums,len,sizeof(int),cmp);
        printf("%d\n",triple(nums,len));
    }
    return 0;
}

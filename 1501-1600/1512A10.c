#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int print_index(int *arr, int length) {
    int f=arr[0],s=arr[1],t=arr[2];
    if (f!=s && s==t) {
        return 1;
    } else if (s!=t && t==f) {
        return 2;
    } else if (t!=f && f==s) {
        return 3;
    } else {
        rep (i,3,length) {
            if (arr[i]!=f) return i+1;
        }
    }
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int nums[len]; read(nums,len);
        printf("%d\n",print_index(nums,len));
    }
    return 0;
}

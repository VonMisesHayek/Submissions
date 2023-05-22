#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int moves(int *arr, int length) {
    int mod[]={0,0};
    rep (i,0,length) {
        if ((arr[i]-i)%2!=0) mod[arr[i]%2]++;
    }
    if (mod[0]==mod[1]) {
        return mod[0];
    } else {
        return -1;
    }
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int nums[len]; scan(nums,len);
        printf("%d\n",moves(nums,len));
    }
    return 0;
}

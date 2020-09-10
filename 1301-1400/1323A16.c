#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
    scanf("\n");
}
int can(int *arr, int length) {
    if (length==1 && arr[0]%2!=0) {
        return 0;
    }
    return 1;
}
int solve(int *arr, int length) {
    scan(arr,length);
    if (can(arr,length)) {
        rep (i,0,length) {
            if (arr[i]%2==0) {
                printf("1\n%d\n",i+1);
                return 1;
            } else if (i>0) {
                printf("2\n%d %d\n",i,i+1);
                return 1;
            }
        }
    } else {
        printf("-1\n");
        return 0;
    }
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int set[len];
        solve(set,len);
    }
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define SIZE 1000000
int dp[SIZE];
int is_round(int n) {
    while (n>10) {
        if (n%10!=0) return 0;
        n/=10;
    }
    return 1;
}
void fill() {
    dp[0]=0;
    rep (i,1,SIZE) dp[i]=dp[i-1]+is_round(i);
}
int main() {
    int queries,curr; scanf("%d\n",&queries);
    fill();
    rep (i,0,queries) {
        scanf("%d\n",&curr);
        printf("%d\n",dp[curr]);
    }
    return 0;
}

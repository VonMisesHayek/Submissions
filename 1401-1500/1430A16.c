#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define LIM 1001
int dp[4][LIM];
void fill() {
    int curr;
    rep (i,0,4) {
        rep (j,0,LIM+1) dp[i][j]=0;
    }
    for (int i=1; 3*i<=LIM; i++) {
        curr=3*i;
        dp[0][curr]=i;
        dp[1][curr]=0;
        dp[2][curr]=0;
        dp[3][curr]=1;
    }
    for (int i=1; 5*i<=LIM; i++) {
        curr=5*i;
        dp[0][curr]=0;
        dp[1][curr]=i;
        dp[2][curr]=0;
        dp[3][curr]=1;
    }
    for (int i=1; 7*i<=LIM; i++) {
        curr=7*i;
        dp[0][curr]=0;
        dp[1][curr]=0;
        dp[2][curr]=i;
        dp[3][curr]=1;
    }
    rep (i,6,LIM+1) {
        if (dp[3][i-3]==1) {
            dp[0][i]=dp[0][i-3]+1;
            dp[1][i]=dp[1][i-3];
            dp[2][i]=dp[2][i-3];
            dp[3][i]=1;
        } else if (dp[3][i-5]==1) {
            dp[0][i]=dp[0][i-5];
            dp[1][i]=dp[1][i-5]+1;
            dp[2][i]=dp[2][i-5];
            dp[3][i]=1;
        } else if (dp[3][i-7]==1) {
            dp[0][i]=dp[0][i-7];
            dp[1][i]=dp[1][i-7];
            dp[2][i]=dp[2][i-7]+1;
            dp[3][i]=1;
        }
    }
}
int main() {
    int queries,curr; scanf("%d\n",&queries);
    fill();
    rep (i,0,queries) {
        scanf("%d\n",&curr);
        if (curr==1 || curr==2 || curr==4) {
            printf("-1\n");
        } else {
            printf("%d %d %d\n",dp[0][curr],dp[1][curr],dp[2][curr]);
        }
    }
    return 0;
}

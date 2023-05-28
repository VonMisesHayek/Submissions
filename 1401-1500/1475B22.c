#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define SIZE 1000001
int dp[SIZE];
void fill() {
    rep (i,0,SIZE) dp[i]=0;
    for (int i=2020; i<SIZE; i+=2020) dp[i]=1;
    for (int i=2021; i<SIZE; i+=2021) dp[i]=1;
    for (int i=2021; i<SIZE; i++) {
        if (dp[i-2020]==1 || dp[i-2021]==1) dp[i]=1;
    }
}
int main() {
    int queries,curr; scanf("%d\n",&queries);
    fill();
    rep (i,0,queries) {
        scanf("%d\n",&curr);
        (dp[curr]) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

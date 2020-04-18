#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
int conv(ll num, int a) {
    int res=num%a;
    if (res==0) {
        return a-1;
    } else {
        return res-1;
    }
}
int main() {
    int n,m,queries;
    ll year;
    scanf("%d %d\n",&n,&m);
    char *first[n],*second[m],str[11];
    for (int i=0; i<n; i++) {
        scanf("%s",str);
        first[i]=(char*) malloc((strlen(str)+1)*sizeof(char));
        strcpy(first[i],str);
    } scanf("\n");
    for (int i=0; i<m; i++) {
        scanf("%s",str);
        second[i]=(char*) malloc((strlen(str)+1)*sizeof(char));
        strcpy(second[i],str);
    } scanf("\n");
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%I64d\n",&year);
        printf("%s%s\n",first[conv(year,n)],second[conv(year,m)]);
    }
    rep (i,0,n) free(first[i]);
    rep (i,0,m) free(second[i]);
    return 0;
}

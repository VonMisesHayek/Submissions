#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define ABC 26
int sieve[ABC];
void init() {
    rep (i,0,ABC) sieve[i]=0;
}
int susp(char *str, int length) {
    int curr,prev=str[0]-'A';
    init();
    rep (i,0,length) {
        curr=str[i]-'A';
        if (sieve[curr]==1 && prev!=curr) {
            return 0;
        } else {
            sieve[curr]=1;
        }
        prev=curr;
    }
    return 1;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        char task[len+1]; scanf("%s",task);
        (susp(task,len)) ? printf("YES\n"):printf("NO\n");
    }
    return 0;
}

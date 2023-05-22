#include <stdio.h>
#include <string.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
int update_length(char *str, char *pre, int length) {
    int res=0;
    rep (i,0,length) {
        if (str[i]==pre[i]) {
            res++;
        } else {
            return res;
        }
    }
    return res;
}
int main() {
    int len; scanf("%d\n",&len);
    char curr[21],prefix[21]; scanf("%s\n",curr);
    strcpy(prefix,curr);
    int plen=strlen(prefix);
    rep (i,1,len) {
        scanf("%s\n",curr);
        plen=update_length(curr,prefix,plen);
    }
    printf("%d",plen);
    return 0;
}

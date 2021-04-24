#include <stdio.h>
#include <string.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
void generate(char *s, int *arr, long length) {
    rep (i,0,length-1) {
        if (s[i]==s[i+1]) {
            arr[i]=1;
        } else {
            arr[i]=0;
        }
    }
    arr[length-1]=0;
}
void accumulate(int *arro, long *arrt, long length) {
    arrt[0]=0;
    rep (i,1,length) arrt[i]=arrt[i-1]+arro[i-1];
}
int process(char *s, long m) {
    long len=strlen(s),l,r;
    int fill[len];
    long acc[len];
    generate(s,fill,len);
    accumulate(fill,acc,len);
    rep (i,0,m) {
        scanf("%ld %ld\n",&l,&r);
        printf("%ld\n",acc[r-1]-acc[l-1]);
    }
}
int main() {
    char str[100001];
    long queries;
    scanf("%s\n%ld\n",str,&queries);
    process(str,queries);
    return 0;
}

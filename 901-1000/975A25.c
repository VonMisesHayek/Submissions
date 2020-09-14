#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define ABC 26
void root(char *s, int *siv, int length) {
    rep (i,0,length) siv[i]=0;
    while (*s) {
        siv[*s-'a']=1;
        s++;
    }
}
int equals(int *objects, int *siv, int index, int length) {
    int keep=1,step=index*length;
    rep (i,0,length) {
        if (*((objects+step)+i)!=siv[i]) keep=0;
    }
    return keep;
}
void aggregate(int *objects, int *siv, int *cant, int length) {
    int is_in=0,step=(*cant)*length,i=0;
    while (!is_in && i<(*cant)) {
        if (equals(objects,siv,i,length)) is_in=1;
        i++;
    }
    if (!is_in) {
        rep (i,0,length) *((objects+step)+i)=siv[i];
        (*cant)++;
    }
}
void print(int *biarr, int length, int width) {
    int step=0;
    rep (i,0,length) {
        rep (j,0,width) printf("%d",*((biarr+step)+j));
        printf("\n");
        step+=width;
    }
}
int main() {
    int len,count=0,sieve[ABC]; char curr[1001];
    scanf("%d\n",&len);
    int obj[len][26];
    rep (i,0,len) {
        scanf("%s ",curr);
        root(curr,sieve,ABC);
        aggregate(obj,sieve,&count,ABC);
    }
    printf("%d",count);
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define size 100
void initialize(int *arr, int length) {
    rep (i,0,length) *(arr+i)=0;
}
int main() {
    int len,tram,curr,poss[size];
    scanf("%d\n",&len);
    initialize(poss,size);
    rep (i,0,len) {
        scanf("%d",&tram);
        rep (j,0,tram) {
            scanf("%d",&curr);
            poss[curr-1]++;
        }
    }
    rep (i,0,size) {
        if (poss[i]==len) printf("%d ",i+1);
    }
    return 0;
}

#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void initialize(int *arr, int length) {
    rep (i,0,length) *(arr+i)=0;
}
int winner_index(int length) {
    long max=-1,curr;
    int max_ind;
    rep (i,0,length) {
        scanf("%ld",&curr);
        if (curr>max) {
            max=curr;
            max_ind=i;
        }
    }
    return max_ind;
}
int absolute(int *arr, int length) {
    int max=arr[0],res=0;
    rep (i,1,length) {
        if (arr[i]>max) {
            max=arr[i];
            res=i;
        }
    }
    return res;
}
int main() {
    int cand,city;
    scanf("%d %d\n",&cand,&city);
    int win[cand];
    initialize(win,cand);
    rep (i,0,city) win[winner_index(cand)]++;
    printf("%d",absolute(win,cand)+1);
    return 0;
}

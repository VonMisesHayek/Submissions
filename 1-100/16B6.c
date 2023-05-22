#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
typedef struct {
    ll box,match;
} container;
void scan(container **arr, int length) {
    rep (i,0,length) arr[i]=(container*) malloc(sizeof(container));
    rep (i,0,length) scanf("%I64d %I64d\n",&(arr[i]->box),&(arr[i]->match));
}
void sort(container **arr, int length) {
    container *temp;
    rep (i,0,length-1) {
        rep (j,i+1,length) {
            if ((arr[i]->match)<(arr[j]->match)) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
long min(ll x, ll y) {
    return (x<=y) ? x:y;
}
ll max_matches(container **arr, int length, long maximum) {
    ll res=0;
    long fill=0,next;
    int pos=0;
    while (pos<length && fill<maximum) {
        next=min(maximum,fill+arr[pos]->box);
        res+=(next-fill)*(arr[pos]->match);
        fill=next;
        pos++;
    }
    return res;
}
int main() {
    long maxsize;
    int m; scanf("%ld %d\n",&maxsize,&m);
    container *warehouse[m];
    scan(warehouse,m);
    sort(warehouse,m);
    printf("%I64d",max_matches(warehouse,m,maxsize));
    rep (i,0,m)  free(warehouse[i]);
    return 0;
}

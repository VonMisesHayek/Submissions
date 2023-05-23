#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void substract(int *arr, int length, int s) {
    rep (i,0,length) {
        if (arr[i]>0) arr[i]-=s;
    }
}
int moves(int *arr, int length) {
    int pos=0,dist[length],total=0,count=0;
    while (arr[pos]!=1 && pos<length) pos++;
    rep (i,0,length) {
        if (arr[i]==0) {
            dist[i]=0;
        } else {
            dist[i]=i-pos;
        }
    }
    rep (i,pos,length) {
        if (dist[i]!=0) {
            count++;
            total+=dist[i]-count;
            for (int j=length-1; j>=i; j--) {
                if (dist[j]>0) dist[j]-=(dist[i]-count);
            }
        }
    }
    return total;
}
int main() {
    int queries,len; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&len);
        int shelf[len]; rep (j,0,len) scanf("%d",(shelf+j));
        printf("%d\n",moves(shelf,len));
    }
    return 0;
}

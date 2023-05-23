#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int color(int *arr, int length) {
    int max=1,cont=1;
    rep (i,1,length) {
        if (arr[i]==arr[i-1]) {
            cont++;
        } else {
            cont=1;
        }
        if (cont>max) max=cont;
    }
    return max;
}
int main() {
    int queries,len; scanf("%d",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d",&len);
        int seq[len]; scan(seq,len);
        printf("%d\n",color(seq,len));
    }
    return 0;
}

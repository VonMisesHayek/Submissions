#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
int cow(int *arr, int length, int d) {
    int pos=1,tot=0;
    while (pos<length && tot<d) {
        while (arr[pos]>0) {
            if (tot+pos<=d) {
                tot+=pos;
                arr[0]++;
                arr[pos]--;
            } else {
                return arr[0];
            }
        }
        pos++;
    }
    return arr[0];
}
int main() {
    int queries,len,days;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d\n",&len,&days);
        int hay[len];
        scan(hay,len);
        printf("%d\n",cow(hay,len,days));
    }
    return 0;
}

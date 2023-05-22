#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef long long ll;
void scan(ll *arr, int length) {
    rep (i,0,length) scanf("%I64d",(arr+i));
    scanf("\n");
}
int min(int x, int y) {
    return (x<=y) ? x:y;
}
int maxmerge(ll *arr, int length) {
    int residue[]={0,0,0},aux;
    rep (i,0,length) residue[arr[i]%3]++;
    aux=min(residue[1],residue[2]);
    return residue[0]+aux+(residue[1]-aux)/3+(residue[2]-aux)/3;
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&len);
        ll array[len];
        scan(array,len);
        printf("%d\n",maxmerge(array,len));
    }
    return 0;
}

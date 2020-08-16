#include <stdio.h>
typedef long long ll;
ll max(ll x, ll y) {
    return (x>y) ? x:y;
}
ll max_area(int a, int b, int x, int y) {
    int l=a-x-1,v=b-y-1;
    return max(max(x,l)*b,max(y,v)*a);
}
int main() {
    int queries,a,b,x,y;
    scanf("%d\n",&queries);
    for (int i=0; i!=queries; i++) {
        scanf("%d %d %d %d\n",&a,&b,&x,&y);
        printf("%I64d\n",max_area(a,b,x,y));
    }
    return 0;
}

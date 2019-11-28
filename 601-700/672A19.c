#include <stdio.h>
int digs(int n) {
    if (n<10) {
        return 1;
    } else if (n<100) {
        return 2;
    } else {
        return 3;
    }
}
void aggregate(int *arr, int m, int pos) {
    int lim=digs(m),a=m;
    for (int i=0; i<lim; i++) {
        arr[pos+lim-i]=a%10;
        a/=10;
    }
    pos+=lim;
}
int main() {
    int list[1001],pos=0,n,curr=1;
    scanf("%d",&n);
    while (pos<n) {
        aggregate(list,curr,pos);
        pos+=digs(curr);
        curr++;
    }
    printf("%d\n",list[n]);
    return 0;
}

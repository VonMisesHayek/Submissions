#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
}
void restore(int *arr, int length, int k) {
    int count=0,pos=0;
    while (count<k) {
        if (pos%2) {
            if (arr[pos]>arr[pos-1]+1 && arr[pos]>arr[pos+1]+1) {
                arr[pos]--;
                count++;
            }
        }
        pos++;
    }
}
void print(int *arr, int length) {
    rep (i,0,length) printf("%d ",*(arr+i));
}
int main() {
    int len,k,l;
    scanf("%d %d\n",&len,&k);
    l=2*len+1;
    int mount[l]; scan(mount,l);
    restore(mount,l,k);
    print(mount,l);
    return 0;
}

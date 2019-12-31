#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
int diff(int *arr, int length, int init, int b) {
    int test=0,social=0;
    for (int i=0; i<length; i++) {
        if (i%init!=b%init) {
            if (*(arr+i)==1) {
                test++;
            } else {
                social++;
            }
        }
    }
    return abs(test-social);
}
int maxim(int *arr, int length, int k) {
    int res=0,comp;
    for (int i=0; i<length; i++) {
        comp=diff(arr,length,k,i);
        if (res<comp) res=comp;
    }
    return res;
}
int main() {
    int len,tab;
    scanf("%d %d\n",&len,&tab);
    int browse[len];
    read(browse,len);
    printf("%d",maxim(browse,len,tab));
    return 0;
}

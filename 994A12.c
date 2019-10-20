#include <stdio.h>
int find(int n, int* list, int len) {
    int res=0;
    int i=0;
    while (i<len && res==0) {
        if (list[i]==n) res=1;
        i++;
    }
    return res;
}
int main() {
    int dig,fing;
    scanf("%d %d",&dig,&fing);
    int digits[dig];
    int fingerprints[fing];
    for (int i=0; i<dig; i++) {
        int d;
        scanf("%d",&d);
        digits[i]=d;
    }
    for (int i=0; i<fing; i++) {
        int f;
        scanf("%d",&f);
        fingerprints[i]=f;
    }
    for (int i=0; i<dig; i++) {
        if (find(digits[i],fingerprints,fing)) printf("%d ",digits[i]);
    }
    return 0;
}

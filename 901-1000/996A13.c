#include <stdio.h>
int bills(int cash) {
    int curr=cash;
    int dollars[5]={100,20,10,5,1};
    int count=0;
    for (int i=0; i<5; i++) {
        if (curr>=dollars[i]) {
            count+=curr/dollars[i];
            curr=curr%dollars[i];
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",bills(n));
    return 0;
}

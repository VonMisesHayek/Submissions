#include <stdio.h>
int check(int* arr, int length) {
    int res=1;
    int i=0;
    while (i<length && res==1) {
        if (arr[i]==0) res=0;
        i++;
    }
    return res;
}
int main() {
    int buttons,bulbs;
    scanf("%d %d",&buttons,&bulbs);
    int sieve[bulbs];
    for (int i=0; i<bulbs; i++) sieve[i]=0;
    for (int i=0; i<buttons; i++) {
        int cant;
        scanf("%d",&cant);
        for (int j=0; j<cant; j++) {
            int add;
            scanf("%d",&add);
            sieve[add-1]=1;
        }
    }
    if (check(sieve,bulbs)) {
        printf("%s",(char*)"YES");
    } else {
        printf("%s",(char*)"NO");
    }
    return 0;
}

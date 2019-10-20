#include <stdio.h>
int main() {
    int lines,upp;
    scanf("%d %d",&lines,&upp);
    int count=upp;
    int sieve[upp];
    for (int i=0; i<upp; i++) sieve[i]=0;
    for (int i=0; i<lines; i++) {
        int l,r;
        scanf("%d %d",&l,&r);
        for (int j=l-1; j<r; j++) {
            if (sieve[j]==0) {
                sieve[j]=1;
                count--;
            }
        }
    }
    printf("%d\n",count);
    for (int i=0; i<upp; i++) {
        if (sieve[i]==0) printf("%d ",i+1);
    }
    return 0;
}

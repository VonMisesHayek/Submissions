#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(y<x);
}
int mini(int x, int y, int z) {
    return min(x,min(y,z));
}
int main() {
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    printf("%d",mini((k*l)/nl,c*d,p/np)/n);
    return 0;
}

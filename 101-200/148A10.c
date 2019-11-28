#include <stdio.h>
int gcd(int a, int b) {
    if (a<b) {
        return gcd(a,b-a);
    } else if (a>b) {
        return gcd(a-b,b);
    } else {
        return a;
    }
}
int mcm(int a, int b) {
    return a*(b/gcd(a,b));
}
int mcm3(int a, int b, int c) {
    return mcm(a,mcm(b,c));
}
int mcm4(int a, int b, int c, int d) {
    return mcm(a,mcm3(b,c,d));
}
int main() {
    int k,l,m,n,d,aux;
    long damage=0;
    scanf("%d\n%d\n%d\n%d\n%d",&k,&l,&m,&n,&d);
    int arr[4]={k,l,m,n};
    for (int i=0; i<4; i++) damage+=d/arr[i];
    for (int i=0; i<3; i++) {
        for (int j=i+1; j<4; j++) {
            aux=mcm(arr[i],arr[j]);
            damage-=d/aux;
        }
    }
    for (int i=0; i<2; i++) {
        for (int j=i+1; j<3; j++) {
            for (int k=j+1; k<4; k++) {
                aux=mcm3(arr[i],arr[j],arr[k]);
                damage+=d/aux;
            }
        }
    }
    damage-=d/mcm4(arr[0],arr[1],arr[2],arr[3]);
    printf("%d",damage);
    return 0;
}

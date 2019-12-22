#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int sup(int a, int b, int k, int l, int y) {
    int res=0;
    for (int c=0; c<=y; c++) {
        int var=min(c/k,a)+min((y-c)/l,b);
        if (res<var) res=var;
    }
    return res;
}
int inf(int a, int b, int k, int l, int y) {
    int res=2001;
    for (int c=0; c<=y; c++) {
        int q1=c/a,q2=(y-c)/b,cand=0;
        if (q1==(k-1)) {
            cand+=c%a;
        } else if (q1==k && c%a==0) {
            cand+=a;
        } else {
            cand=2001;
        }
        if (q2==(l-1)) {
            cand+=(y-c)%b;
        } else if (q2==l && (y-c)%b==0) {
            cand+=b;
        } else {
            cand=2001;
        }
        if (res>cand) res=cand;
    }
    return res*(res<=2000);
}
int main() {
    int first,second,yellf,yells,cards;
    scanf("%d\n%d\n%d\n%d\n%d",&first,&second,&yellf,&yells,&cards);
    printf("%d ",inf(first,second,yellf,yells,cards));
    printf("%d",sup(first,second,yellf,yells,cards));
    return 0;
}

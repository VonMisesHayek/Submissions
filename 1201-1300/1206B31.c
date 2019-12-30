#include <stdio.h>
void update(long long save, long *minus, long *neg, long *zero, long *one, long *plus) {
    if (save<-1) {
        (*minus)++;
    } else if (save==-1) {
        (*neg)++;
    } else if (save==0) {
        (*zero)++;
    } else if (save==1) {
        (*one)++;
    } else {
        (*plus)++;
    }
}
void acc(long long save, long long *sumneg, long long *sumpos) {
    if (save<-1) {
        (*sumneg)+=save;
    } else if (save>1) {
        (*sumpos)+=save;
    }
}
int main() {
    long len,minus=0,neg=0,zero=0,one=0,plus=0;
    long long curr,sumneg=0,sumpos=0,tot;
    scanf("%ld\n",&len);
    for (long i=0; i<len; i++) {
        scanf("%I64d ",&curr);
        update(curr,&minus,&neg,&zero,&one,&plus);
        acc(curr,&sumneg,&sumpos);
    }
    tot=(sumpos-plus)+zero-(sumneg+minus)+(2*((neg+minus)%2))*(zero==0);
    printf("%I64d",tot);
    return 0;
}

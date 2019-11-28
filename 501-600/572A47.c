#include <stdio.h>
int main() {
    long long lena,lenb,k,m;
    scanf("%I64d %I64d\n%I64d %I64d\n",&lena,&lenb,&k,&m);
    long long a[lena],b[lenb];
    for (long long i=0; i<lena; i++) scanf("%I64d",&a[i]);
    for (long long i=0; i<lenb; i++) scanf("%I64d",&b[i]);
    if (a[k-1]<b[lenb-m]) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

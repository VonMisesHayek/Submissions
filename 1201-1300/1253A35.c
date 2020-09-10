#include <stdio.h>
#define rep(i,a,b) for (long i=a; i<b; i++)
void scan(int *arr, long length) {
    rep (i,0,length) scanf("%d",(arr+i));
    scanf("\n");
}
int can(int *arro, int *arrt, long length) {
    rep (i,0,length) arrt[i]-=arro[i];
    int keep=1001,seg=0,ter=0;
    rep (i,0,length) {
        if (arrt[i]!=0) {
            if (seg && ter) return 0;
            if (keep==1001) {
                keep=arrt[i];
                seg=1;
                if (keep<0) return 0;
            } else if (arrt[i]!=keep) {
                return 0;
            }
        } else if (seg==1) {
            ter=1;
        }
    }
    return 1;
}
int main() {
    int queries;
    long len;
    scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%ld\n",&len);
        int up[len],down[len];
        scan(up,len); scan(down,len);
        if (can(up,down,len)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

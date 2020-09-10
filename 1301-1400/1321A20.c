#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void scan(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
    scanf("\n");
}
int are_equal(int *arro, int *arrt, int length) {
    rep (i,0,length) {
        if (*(arro+i)!=*(arrt+i)) return 0;
    }
    return 1;
}
void sym_diff(int *arro, int *arrt, int length, int *a, int *b) {
    rep (i,0,length) {
        if (arro[i]==1 && arrt[i]==0) {
            (*a)++;
        } else if (arro[i]==0 && arrt[i]==1) {
            (*b)++;
        }
    }
}
int min_max(int *arro, int *arrt, int length) {
    if (are_equal(arro,arrt,length)) {
        return -1;
    } else {
        int a=0,b=0;
        sym_diff(arro,arrt,length,&a,&b);
        if (a==0) {
            return -1;
        } else {
            return b/a+1;
        }
    }
}
int main() {
    int len;
    scanf("%d\n",&len);
    int rob[len],bio[len];
    scan(rob,len); scan(bio,len);
    printf("%d",min_max(rob,bio,len));
    return 0;
}

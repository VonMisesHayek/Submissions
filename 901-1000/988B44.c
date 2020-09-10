#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void assign(char **str, int length) {
    char curr[101];
    rep (i,0,length) {
        scanf("%s\n",curr);
        str[i]=(char*) malloc(101*sizeof(char));
        strcpy(str[i],curr);
    }
}
int is_substring(char *stro, char *strt) {
    int leno=strlen(stro),lent=strlen(strt);
    if (leno<lent) {
        int l=lent-leno;
        rep (i,0,l+1) {
            int keep=1;
            rep (j,0,leno) {
                if (stro[j]!=strt[i+j]) keep=0;
            }
            if (keep) return 1;
        }
        return -2;
    } else if (leno>lent) {
        int l=leno-lent;
        rep (i,0,l+1) {
            int keep=1;
            rep (j,0,lent) {
                if (strt[j]!=stro[i+j]) keep=0;
            }
            if (keep) return -1;
        }
        return -2;
    } else {
        rep (i,0,leno) {
            if (stro[i]!=strt[i]) return -2;
        }
        return 1;
    }
}
void del(char **str, int length) {
    rep (i,0,length) free(str[i]);
}
void print(char **str, int length) {
    rep (i,0,length) printf("%s\n",str[i]);
}
void bsort(char **str, int length) {
    char *temp=(char*) malloc(101*sizeof(char));
    rep (i,0,length-1) {
        rep (j,i+1,length) {
            switch (is_substring(str[i],str[j])) {
                case -1:
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                    break;
                case -2:
                    printf("NO");
                    return;
            }
        }
    }
    printf("YES\n");
    print(str,length);
    free(temp);
}
int main() {
    int len;
    scanf("%d\n",&len);
    char *order[len];
    assign(order,len);
    bsort(order,len);
    del(order,len);
    return 0;
}

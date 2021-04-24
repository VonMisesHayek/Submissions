#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 11
#define rep(i,a,b) for (int i=a; i<b; i++)
typedef struct {
    char species[size],color[size];
} leaf;
int is_in(leaf *b, int total, char *so, char *st) {
    rep (i,0,total) {
        if (strcmp((b+i)->species,so)==0 && strcmp((b+i)->color,st)==0) return 1;
    }
    return 0;
}
void pick_leaf(leaf *b, int length) {
    int res=0;
    char curro[size],currt[size];
    rep (i,0,length) {
        scanf("%s %s\n",curro,currt);
        if (is_in(b,res,curro,currt)==0) {
            strcpy((b+res)->species,curro);
            strcpy((b+res)->color,currt);
            res++;
        }
    }
    printf("%d",res);
}
int main() {
    int len;
    scanf("%d\n",&len);
    leaf bouq[len];
    pick_leaf(bouq,len);
    return 0;
}

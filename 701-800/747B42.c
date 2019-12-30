#include <stdio.h>
int valid(char *str, int length, int *A, int *C, int *T, int *G) {
    int a=0,c=0,t=0,g=0,lim=length/4;
    while (*str) {
        if (*(str)=='A') {
            a++;
        } else if (*(str)=='C') {
            c++;
        } else if (*(str)=='T') {
            t++;
        } else if (*(str)=='G') {
            g++;
        }
        str++;
    }
    *A=a; *C=c; *T=t; *G=g;
    return (a<=lim && c<=lim && t<=lim && g<=lim);
}
void fill(char *str, int *a, int *c, int *t, int *g) {
    int pos=0;
    while ((*a)>0) {
        if (str[pos]=='?') {
            str[pos]='A';
            (*a)--;
        }
        pos++;
    }
    while ((*c)>0) {
        if (str[pos]=='?') {
            str[pos]='C';
            (*c)--;
        }
        pos++;
    }
    while ((*t)>0) {
        if (str[pos]=='?') {
            str[pos]='T';
            (*t)--;
        }
        pos++;
    }
    while ((*g)>0) {
        if (str[pos]=='?') {
            str[pos]='G';
            (*g)--;
        }
        pos++;
    }
}
int main() {
    int len,a=0,c=0,t=0,g=0;
    scanf("%d\n",&len);
    if (len%4!=0) {
        printf("===");
    } else {
        char nuclei[len+1];
        scanf("%s",nuclei);
        if (valid(nuclei,len,&a,&c,&t,&g)) {
            a=len/4-a; c=len/4-c; t=len/4-t; g=len/4-g;
            fill(nuclei,&a,&c,&t,&g);
            printf("%s",nuclei);
        } else {
            printf("===");
        }
    }
    return 0;
}

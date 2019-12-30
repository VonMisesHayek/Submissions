#include <stdio.h>
#define SIZE 80
#define NUMLEN 10
void read(char *arr, int length) {
    for (int i=0; i<length; i++) scanf("%c",(arr+i));
    scanf("\n");
}
void rea(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) scanf("%c",((biarr+i*width)+j));
        scanf("\n");
    }
}
void print(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) printf("%c",*((biarr+i*width)+j));
        printf("\n");
    }
}
int identify(char *arr, char *biarr, int index, int length, int width) {
    int is;
    for (int i=0; i<length; i++) {
        is=1;
        for (int j=0; j<width; j++) {
            if (*(arr+index+j)!=*((biarr+i*width)+j)) is=0;
        }
        if (is) return i;
    }
}
void decode(char *arr, char *biarr, int leng, int length, int width) {
    int pos=0,dig;
    while (pos<leng) {
        dig=identify(arr,biarr,pos,length,width);
        printf("%d",dig);
        pos+=width;
    }
}
int main() {
    char code[SIZE],table[10][NUMLEN];
    read(code,SIZE);
    rea(table,10,NUMLEN);
    decode(code,table,SIZE,10,NUMLEN);
    return 0;
}

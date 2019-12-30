#include <stdio.h>
#define ABC 26
void read(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) scanf("%c",((biarr+i*width)+j));
        scanf("\n");
    }
}
void write(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) printf("%c",*((biarr+i*width+j)));
        printf("\n");
    }
}
int fill(char *str, int *siv, int length) {
    for (int i=0; i<length; i++) siv[i]=0;
    while (*str) {
        siv[*str-'a']=1;
        str++;
    }
}
int are_equal(int *siv1, int *siv2, int length) {
    for (int i=0; i<length; i++) {
        if (siv1[i]!=siv2[i]) return 0;
    }
    return 1;
}
int faces(char *biarr, int length, int width) {
    if (length<2 || width<2) return 0;
    int count=0,save[ABC],sieve[ABC];
    char search[]="face",now[5];
    fill(search,save,ABC);
    now[4]='\0';
    for (int i=0; i<length-1; i++) {
        for (int j=0; j<width-1; j++) {
            now[0]=*((biarr+i*width)+j); now[1]=*((biarr+(i+1)*width)+j);
            now[2]=*((biarr+i*width)+j+1); now[3]=*((biarr+(i+1)*width)+j+1);
            fill(now,sieve,ABC);
            if (are_equal(save,sieve,ABC)) count++;
        }
    }
    return count;
}
int main() {
    int len,wid;
    scanf("%d %d\n",&len,&wid);
    char pict[len][wid];
    read(pict,len,wid);
    printf("%d",faces(pict,len,wid));
    return 0;
}

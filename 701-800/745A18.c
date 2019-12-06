#include <stdio.h>
#include <string.h>
void assign(char *str, char *save, int length) {
    for (int i=0; i<length; i++) save[i]=str[i];
}
void shift(char *str, char *save, int length, int q) {
    for (int i=0; i<q; i++) save[i]=str[length-q+i];
    for (int i=q; i<length; i++) save[i]=str[i-q];
}
int is(char *biarr, char *save, int length, int index) {
    for (int i=0; i<length; i++) {
        if (*((biarr+index*length)+i)!=save[i]) return 0;
    }
    return 1;
}
int is_in(char *biarr, char *save, int length, int maxind) {
    for (int i=0; i<maxind; i++) {
        if (is(biarr,save,length,i)) return 1;
    }
    return 0;
}
int cyclic(char *str, int length) {
    int res=1;
    char curr[length],words[length][length];
    assign(str,curr,length);
    for (int i=0; i<length; i++) words[0][i]=str[i];
    for (int i=1; i<length; i++) {
        shift(str,curr,length,i);
        if (is_in(words,curr,length,res)==0) {
            for (int j=0; j<length; j++) words[res][j]=curr[j];
            res++;
        }
    }
    return res;
}
int main() {
    char word[50];
    scanf("%s",word);
    int len=strlen(word);
    printf("%d",cyclic(word,len));
    return 0;
}

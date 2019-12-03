#include <stdio.h>
void maxfreq(int *arr, int length) {
    int max=0,coorx=0,coory=0;
    for (int i=0; i<length; i++) {
        for (int j=0; j<length; j++) {
            if (*((arr+i*length)+j)>max) {
                max=*((arr+i*length)+j);
                coorx=i;
                coory=j;
            }
        }
    }
    printf("%c%c",coorx+'A',coory+'A');
}
void print(int *arr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            printf("%d",*((arr+i*width)+j));
        }
        printf("\n");
    }
}
int main() {
    int size;
    int book[26][26];
    for (int i=0; i<26; i++) {
        for (int j=0; j<26; j++) book[i][j]=0;
    }
    scanf("%d\n",&size);
    char word[size];
    scanf("%s",word);
    for (int i=0; i<size-1; i++) {
        book[word[i]-'A'][word[i+1]-'A']++;
    }
    maxfreq(book,26);
    return 0;
}

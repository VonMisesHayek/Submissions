#include <stdio.h>
int main() {
    int len;
    int del=0;
    scanf("%d",&len);
    char word[len];
    scanf("%s",word);
    int i=0;
    while (i<len) {
        int temp=0;
        int j=0;
        while (word[i+j]=='x' && j<len-i) {
            temp++;
            j++;
        }
        if (temp>2) del+=temp-2;
        i=i+temp+1;
    }
    printf("%d",del);
    return 0;
}
